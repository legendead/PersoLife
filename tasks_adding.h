#ifndef TASKS_ADDING_H
#define TASKS_ADDING_H

#include <QDialog>
#include <QPainter>

namespace Ui {
class tasks_adding;
}

class tasks_adding : public QDialog
{
    Q_OBJECT

public:
    explicit tasks_adding(QWidget *parent = nullptr);
    ~tasks_adding();
    QString name_file;

public slots:
    void on_pushButton_clicked();

private:
    Ui::tasks_adding *ui;
    void SetInterfaceStyle();//Изменение интерфейса

protected:
    void paintEvent(QPaintEvent *event);

signals:
    void taskAdded();

};

#endif
