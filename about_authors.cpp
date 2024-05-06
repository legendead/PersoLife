#include "about_authors.h"
#include "ui_about_authors.h"
#include "stylehelper.h"
#include <QStyleOption>
#include <QPixmap>

about_authors::about_authors(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_authors)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    SetInterfaceStyle();
}

about_authors::~about_authors()
{
    delete ui;
}

void about_authors::SetInterfaceStyle()
{
    this->setStyleSheet(Stylehelper::getMainWidgetStyle());
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->textBrowser->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
}

void about_authors::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
