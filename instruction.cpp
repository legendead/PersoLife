#include "instruction.h"
#include "ui_instruction.h"
#include "stylehelper.h"
#include <QStyleOption>
#include <QPixmap>

Instruction::Instruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instruction)
{
    ui->setupUi(this);
    SetInterfaceStyle();
}

Instruction::~Instruction()
{
    delete ui;
}

void Instruction::SetInterfaceStyle()
{
    this->setStyleSheet(Stylehelper::getMainWidgetStyle());
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
}

void Instruction::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
