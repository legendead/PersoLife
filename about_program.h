#ifndef ABOUT_PROGRAM_H
#define ABOUT_PROGRAM_H

#include <QDialog>
#include <QPainter>

namespace Ui {
class about_program;
}

class about_program : public QDialog
{
    Q_OBJECT

public:
    explicit about_program(QWidget *parent = nullptr);
    ~about_program();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::about_program *ui;
    void SetInterfaceStyle();//Изменение интерфейса
};

#endif // ABOUT_PROGRAM_H
