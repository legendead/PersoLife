#include "about_program.h"
#include "ui_about_program.h"
#include "stylehelper.h"
#include <QStyleOption>
#include <QPixmap>

about_program::about_program(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_program)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    SetInterfaceStyle();
}

about_program::~about_program()
{
    delete ui;
}

void about_program::SetInterfaceStyle()
{
    this->setStyleSheet(Stylehelper::getMainWidgetStyle());
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->textBrowser->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
}

void about_program::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
