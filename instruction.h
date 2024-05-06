#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <QDialog>
#include <QPainter>

namespace Ui {
class Instruction;
}

class Instruction : public QDialog
{
    Q_OBJECT

public:
    explicit Instruction(QWidget *parent = 0);
    ~Instruction();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::Instruction *ui;
    void SetInterfaceStyle();//Изменение интерфейса
};

#endif // INSTRUCTION_H
