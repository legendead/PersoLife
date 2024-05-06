#ifndef FILE_CREATING_H
#define FILE_CREATING_H

#include <QDialog>

namespace Ui {
class file_creating;
}

class file_creating : public QDialog
{
    Q_OBJECT

public:
    explicit file_creating(QWidget *parent = nullptr);
    ~file_creating();

private slots:
    void on_cancle_button_clicked();
    void on_create_button_clicked();

private:
    Ui::file_creating *ui;
signals:
    void filecreated(QString FileName);
};

#endif // FILE_CREATING_H
