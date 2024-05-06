#include "tasks_adding.h"
#include "ui_tasks_adding.h"
#include <QMessageBox>
#include <tasks.h>
#include <mainwindow.h>
#include <tasks_graph.h>
#include "stylehelper.h"
#include <QStyleOption>
#include <QPixmap>

FILE *file;
Tasks task;

tasks_adding::tasks_adding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tasks_adding)
{
    ui->setupUi(this);
    setFixedSize(364, 375);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
    SetInterfaceStyle();
}

tasks_adding::~tasks_adding()
{
    delete ui;
}

void tasks_adding::on_pushButton_clicked()
{
    file = fopen(name_file.toStdString().c_str(), "a");
    if (file == NULL)
    {
        QMessageBox::critical(this, trUtf8("Внимание"), trUtf8("Не удалось открыть файл!"));
        return;
    }
    QString specname = ui->name_edit->text();
    if (specname.isEmpty())
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Введите название задачи!"));
        return;
    }
    QString name, note;
    name = ui->name_edit->text();
    strcpy(task.name, name.toStdString().c_str());
    note = ui->note_edit->text();
    strcpy(task.note, note.toStdString().c_str());
    task.date = ui->dateEdit->date();
    task.priority = ui->during_slider->value();
    task.time_start = ui->timeEdit_start->time();
    task.time_end = ui->timeEdit_end->time();
    int time_during_ms = task.time_start.msecsTo(task.time_end);
    if (time_during_ms < 0 || time_during_ms == 0)
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Проверьте время начала и конца!"));
        return;
    }
    task.time_during = QTime(0, 0).addMSecs(time_during_ms);;
    fwrite(&task, sizeof(Tasks), 1, file);
    ui->name_edit->clear();
    ui->note_edit->clear();
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
    ui->timeEdit_start->setTime(QTime::fromString("10:00", "hh:mm"));
    ui->timeEdit_end->setTime(QTime::fromString("12:00", "hh:mm"));
    ui->during_slider->setValue(1);
    QMessageBox::information(this, trUtf8("Внимание"), trUtf8("Задача успешно добавлена!"));
    emit taskAdded();
    fclose(file);
}

void tasks_adding::SetInterfaceStyle()
{
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->groupBox->setStyleSheet(Stylehelper::getGroupBoxStyle());
    ui->groupBox_2->setStyleSheet(Stylehelper::getGroupBoxStyle());
    ui->label->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_2->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_3->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_4->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_5->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_6->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_7->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_8->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_9->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_10->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->label_11->setStyleSheet(Stylehelper::getLabelWidgetStyle());
    ui->name_edit->setStyleSheet(Stylehelper::getLineEditWidgetStyle());
    ui->note_edit->setStyleSheet(Stylehelper::getLineEditWidgetStyle());
    ui->timeEdit_end->setStyleSheet(Stylehelper::getTimeWidgetStyle());
    ui->timeEdit_start->setStyleSheet(Stylehelper::getTimeWidgetStyle());
    ui->during_slider->setStyleSheet(Stylehelper::getSliderWidgetStyle());
    ui->dateEdit->setStyleSheet(Stylehelper::getDateEditWidgetStyle());
}

void tasks_adding::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
