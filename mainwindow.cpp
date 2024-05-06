#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <tasks_graph.h>
#include <tasks.h>
#include <tasks_adding.h>
#include <QComboBox>
#include <fstream>
#include <QDebug>
#include <QThread>
#include "stylehelper.h"
#include <QStyleOption>
#include <QPixmap>

FILE *files;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(822, 454);
    connect(adding, &tasks_adding::taskAdded, this, &MainWindow::on_pushButton_clicked);
    connect(create_file, &file_creating::filecreated, this, &MainWindow::file_open_after_create);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    SetInterfaceStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_file_creating_action_triggered()
{
    if (fileopened)
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Сперва закройте файл!"));
        return;
    }
    create_file->show();
}

void MainWindow::on_program_exit_action_triggered()
{
    QMessageBox msgBox;
    msgBox.setText(trUtf8("Завершить работу программы?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setWindowTitle("PersoLife - выход");
    msgBox.setDefaultButton(QMessageBox::Yes);
    int res = msgBox.exec();
    if (res == QMessageBox::Yes)
        exit(0);
}

void MainWindow::on_file_opening_action_triggered()
{
    if (fileopened)
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Сперва закройте файл!"));
        return;
    }
    fileName = QFileDialog::getOpenFileName(this,"Открытие файла",
                                            "d:/NN/", ("Все файлы (*.*);; Текстовые документы (*.txt)"));
    if (!fileName.isEmpty())
    {
        adding->name_file = fileName;
        graph->filenamer = fileName;
        fileopened = true;
        QMessageBox::information(this, trUtf8("Внимание"), trUtf8("Файл успешно открыт!"));
        on_pushButton_clicked();
        ui->tasks_adding_action->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
        ui->tasks_graph_action->setEnabled(true);
        ui->tasks_clear_all->setEnabled(true);
        ui->tasks_clear_done->setEnabled(true);
        ui->groupBox->setEnabled(true);
        ui->file_closing_action->setEnabled(true);
        return;
    }
}

void MainWindow::file_open_after_create(QString FileName)
{
    fileName = FileName;
    adding->name_file = fileName;
    graph->filenamer = fileName;
    fileopened = true;
    on_pushButton_clicked();
    ui->tasks_adding_action->setEnabled(true);
    ui->groupBox_2->setEnabled(true);
    ui->tasks_graph_action->setEnabled(true);
    ui->tasks_clear_all->setEnabled(true);
    ui->tasks_clear_done->setEnabled(true);
    ui->groupBox->setEnabled(true);
    ui->file_closing_action->setEnabled(true);
    return;
}

void MainWindow::on_tasks_adding_action_triggered()
{
    adding->show();
}

void MainWindow::on_file_closing_action_triggered()
{
    if (!fileopened)
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Файл не был открыт!"));
        return;
    }
    fclose(files);
    ui->tableWidget->setRowCount(0);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    ui->tasks_adding_action->setEnabled(false);
    ui->groupBox->setEnabled(false);
    ui->file_closing_action->setEnabled(false);
    ui->tasks_graph_action->setEnabled(false);
    ui->tasks_clear_all->setEnabled(false);
    ui->tasks_clear_done->setEnabled(false);
    ui->groupBox_2->setEnabled(false);
    fileopened = false;
    QMessageBox::information(this, trUtf8("Внимание"), trUtf8("Файл закрыт!"));
}

void MainWindow::on_autors_action_triggered()
{
    authors->show();
}

void MainWindow::on_program_about_action_triggered()
{
    info->show();
}

void MainWindow::on_pushButton_clicked()
{
    QString priority = ui->combo_priority->currentText();
    QString date = ui->combo_date->currentText();
    int g = 0;
    FILE *files = fopen(fileName.toStdString().c_str(), "r");
    if (files == NULL)
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Файл не открыт!"));
        return;
    }
    Tasks tasks;
    Tasks sortedTasks[100];
    while (fread(&tasks, sizeof(tasks), 1, files) == 1)
    {
        if (ui->task_name_filter->text() != "")
        {
            QString filter = ui->task_name_filter->text();
            QString n(tasks.name);
            Qt::CaseSensitivity sens = ui->sens_checkbox->checkState() ? Qt::CaseSensitive : Qt::CaseInsensitive;
            if (ui->strict_checkbox->checkState() ? n.compare(filter, sens) : n.count(filter, sens) == 0)
                continue;
        }
        sortedTasks[g] = tasks;
        g++;
    }
    for (int i = 0; i < g - 1; i++)
    {
        for (int j = 0; j < g - i - 1; j++)
        {
            if (priority == "От 1 до 5")
            {
                if (sortedTasks[j].priority > sortedTasks[j + 1].priority)
                {
                    Tasks temp = sortedTasks[j];
                    sortedTasks[j] = sortedTasks[j + 1];
                    sortedTasks[j + 1] = temp;
                }
            }
            else
            {
                if (sortedTasks[j].priority < sortedTasks[j + 1].priority)
                {
                    Tasks temp = sortedTasks[j];
                    sortedTasks[j] = sortedTasks[j + 1];
                    sortedTasks[j + 1] = temp;
                }
            }
            if (date == "От новых к старым")
            {
                if (sortedTasks[j].date < sortedTasks[j + 1].date)
                {
                    Tasks temp = sortedTasks[j];
                    sortedTasks[j] = sortedTasks[j + 1];
                    sortedTasks[j + 1] = temp;
                }
            }
            else if (date == "От старых к новым")
            {
                if (sortedTasks[j].date > sortedTasks[j + 1].date)
                {
                    Tasks temp = sortedTasks[j];
                    sortedTasks[j] = sortedTasks[j + 1];
                    sortedTasks[j + 1] = temp;
                }
            }
        }
    }

    isTableSetuped = false;
    ui->tableWidget->setRowCount(g);
    for (int i = 0; i < g; i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(sortedTasks[i].date.toString("dd.MM.yyyy")));
        ui->tableWidget->item(i, 0)->setFlags(Qt::ItemIsEditable);
        ui->tableWidget->item(i, 0)->setTextColor(Qt::black);
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(sortedTasks[i].name));
        ui->tableWidget->item(i, 1)->setFlags(Qt::ItemIsEditable);
        ui->tableWidget->item(i, 1)->setTextColor(Qt::black);
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(sortedTasks[i].priority)));
        ui->tableWidget->item(i, 2)->setFlags(Qt::ItemIsEditable);
        ui->tableWidget->item(i, 2)->setTextColor(Qt::black);
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(sortedTasks[i].time_start.toString("hh:mm")));
        ui->tableWidget->item(i, 3)->setFlags(Qt::ItemIsEditable);
        ui->tableWidget->item(i, 3)->setTextColor(Qt::black);
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(sortedTasks[i].time_during.toString("hh:mm")));
        ui->tableWidget->item(i, 4)->setFlags(Qt::ItemIsEditable);
        ui->tableWidget->item(i, 4)->setTextColor(Qt::black);
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(sortedTasks[i].note));
        QComboBox *ComboBox = new QComboBox();
        ComboBox->setStyleSheet("background-color: white;");
        ComboBox->addItem("Не начато");
        ComboBox->addItem("В работе");
        ComboBox->addItem("Доработать");
        ComboBox->addItem("Сделано");
        connect(ComboBox, &QComboBox::currentTextChanged, this, [this, ComboBox, i](const QString& newText){ this->comboBoxValueChanged(newText, i); });
        ui->tableWidget->setCellWidget(i, 6, ComboBox);
        ComboBox->setCurrentText(sortedTasks[i].status);
    }
    isTableSetuped = true;
    if (g == 0)
    {
        ui->tableWidget->setRowCount(0);
    }
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    fclose(files);
}

void MainWindow::on_tasks_graph_action_triggered()
{
    graph->show();
    graph->render_graph();
}

void MainWindow::on_combo_priority_currentIndexChanged(int index)
{
    this->on_pushButton_clicked();
}

void MainWindow::on_combo_date_currentIndexChanged(int index)
{
    this->on_pushButton_clicked();
}

void MainWindow::on_task_name_filter_textChanged(const QString &arg1)
{
    this->on_pushButton_clicked();
}

void MainWindow::on_strict_checkbox_clicked()
{
    this->on_pushButton_clicked();
}

void MainWindow::on_sens_checkbox_clicked()
{
    this->on_pushButton_clicked();
}

void MainWindow::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    graph->render_graph();
    if (isTableSetuped)
    {
        FILE* files = fopen(fileName.toStdString().c_str(), "r+");
        if (files == NULL)
        {
            QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Не удалось открыть файл!"));
            return;
        }
        QString name = ui->tableWidget->item(item->row(), 1)->text();
        QString date = ui->tableWidget->item(item->row(), 0)->text();
        QString time_start = ui->tableWidget->item(item->row(), 3)->text();
        QString time_during = ui->tableWidget->item(item->row(), 4)->text();
        int priority = ui->tableWidget->item(item->row(), 2)->text().toInt();
        size_t buffer_size = sizeof(Tasks);
        Tasks buffer;
        bool found = false;
        while (fread(&buffer, buffer_size, 1, files) == 1)
        {
            int time_during_ms = buffer.time_start.msecsTo(buffer.time_end);
            QTime time_during_buffer =  QTime(0, 0).addMSecs(time_during_ms);
            if (time_during_buffer.toString("hh:mm") == time_during && name.compare(QString(buffer.name), Qt::CaseSensitive) == 0 && priority == buffer.priority && date == buffer.date.toString("dd.MM.yyyy") && time_start == buffer.time_start.toString("hh:mm"))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            strcpy(buffer.note, item->text().toStdString().c_str());
            fseek(files, -buffer_size, SEEK_CUR);
            fwrite(&buffer, buffer_size, 1, files);
        }
        fclose(files);
        this->on_pushButton_clicked();
    }
}

void MainWindow::comboBoxValueChanged(const QString& newText, int i)
{
    if (isTableSetuped)
    {
        FILE* files = fopen(fileName.toStdString().c_str(), "r+");
        if (files == NULL)
        {
            QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Не удалось открыть файл!"));
            return;
        }
        QString name = ui->tableWidget->item(i, 1)->text();
        QString date = ui->tableWidget->item(i, 0)->text();
        QString time_start = ui->tableWidget->item(i, 3)->text();
        QString time_during = ui->tableWidget->item(i, 4)->text();
        int priority = ui->tableWidget->item(i, 2)->text().toInt();
        size_t buffer_size = sizeof(Tasks);
        Tasks buffer;
        bool found = false;
        while (fread(&buffer, buffer_size, 1, files) == 1)
        {
            int time_during_ms = buffer.time_start.msecsTo(buffer.time_end);
            QTime time_during_buffer =  QTime(0, 0).addMSecs(time_during_ms);
            if (time_during_buffer.toString("hh:mm") == time_during && name.compare(QString(buffer.name), Qt::CaseSensitive) == 0 && priority == buffer.priority && date == buffer.date.toString("dd.MM.yyyy") && time_start == buffer.time_start.toString("hh:mm"))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            strcpy(buffer.status, newText.toStdString().c_str());
            fseek(files, -buffer_size, SEEK_CUR);
            fwrite(&buffer, buffer_size, 1, files);
        }
        fclose(files);
        on_pushButton_clicked();
    }
}

void MainWindow::on_tasks_clear_all_triggered()
{
    QMessageBox msgBox;
    msgBox.setText(trUtf8("Очистить все задачи?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setWindowTitle("PersoLife - очистка");
    msgBox.setDefaultButton(QMessageBox::Yes);
    int res = msgBox.exec();
    if (res == QMessageBox::Yes)
    {
        std::ofstream file(fileName.toStdString().c_str(), std::ios::trunc);
        if (file.is_open())
            file.close();
        this->on_pushButton_clicked();
        graph->hide();
    }
}

void MainWindow::on_tasks_clear_done_triggered()
{
    QMessageBox msgBox;
    msgBox.setText(trUtf8("Очистить сделанные задачи?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setWindowTitle("PersoLife - очистка");
    msgBox.setDefaultButton(QMessageBox::Yes);
    int res = msgBox.exec();
    if (res == QMessageBox::Yes)
    {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly))
        {
            QDataStream in(&file);
            Tasks task;
            QVector<Tasks> tasks;
            while (!in.atEnd())
            {
                in.readRawData(reinterpret_cast<char*>(&task), sizeof(Tasks));
                QString status = QString::fromUtf8(task.status);
                if (status.compare(QString("Сделано")) != 0)
                {
                    tasks.append(task);
                }
            }
            file.close();
            if (file.open(QIODevice::WriteOnly))
            {
                QDataStream out(&file);
                for (const Tasks& task : tasks)
                {
                    out.writeRawData(reinterpret_cast<const char*>(&task), sizeof(Tasks));
                }
                file.close();
            }
        }
        this->on_pushButton_clicked();
        graph->hide();
    }
}

void MainWindow::SetInterfaceStyle()
{
    this->setStyleSheet(Stylehelper::getMainWidgetStyle());
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->menu->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->menu_2->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->menu_3->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->groupBox->setStyleSheet(Stylehelper::getGroupBoxStyle());
    ui->groupBox_2->setStyleSheet(Stylehelper::getGroupBoxStyle());
    ui->menubar->setStyleSheet(Stylehelper::getMenuBarStyle());
    ui->menu->setStyleSheet(Stylehelper::getMenuStyle());
    ui->menu_2->setStyleSheet(Stylehelper::getMenuStyle());
    ui->menu_3->setStyleSheet(Stylehelper::getMenuStyle());
    ui->tableWidget->setStyleSheet(Stylehelper::getTableWidgetStyle());
    ui->label->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_2->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_3->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->sens_checkbox->setStyleSheet(Stylehelper::getCheckBoxWidgetStyle());
    ui->strict_checkbox->setStyleSheet(Stylehelper::getCheckBoxWidgetStyle());
    ui->task_name_filter->setStyleSheet(Stylehelper::getLineEditWidgetStyle());
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}

void MainWindow::on_action_triggered()
{
    inst->show();
}
