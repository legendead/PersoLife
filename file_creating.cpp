#include "file_creating.h"
#include "ui_file_creating.h"
#include <QMessageBox>
#include <QToolTip>
#include <mainwindow.h>
#include <QPixmap>

file_creating::file_creating(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::file_creating)
{
    ui->setupUi(this);
    setFixedSize(250, 104);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
}

file_creating::~file_creating()
{
    delete ui;
}

void file_creating::on_cancle_button_clicked()
{
    this->hide();
}

void file_creating::on_create_button_clicked()
{
    if (ui->file_name->text().isEmpty())
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Введите название файла!"));
        return;
    }
    FILE* file = fopen(ui->file_name->text().toStdString().c_str(), "w");
    fclose(file);
    this->hide();
    emit filecreated(ui->file_name->text());
    ui->file_name->clear();
    QMessageBox::information(this, trUtf8("Внимание"), trUtf8("Файл успешно создан и открыт!"));
}
