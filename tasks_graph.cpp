#include "tasks_graph.h"
#include "ui_tasks_graph.h"
#include <tasks.h>
#include <QMessageBox>
#include <map>
#include <QGraphicsTextItem>
#include <tasks_adding.h>
#include <mainwindow.h>
#include "stylehelper.h"
#include <QStyleOption>
#include <QPixmap>

tasks_graph::tasks_graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tasks_graph)
{
    ui->setupUi(this);
    setFixedSize(582, 453);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    SetInterfaceStyle();
}

tasks_graph::~tasks_graph()
{
    delete ui;
}

void tasks_graph::SetInterfaceStyle()
{
    this->setStyleSheet(Stylehelper::getMainWidgetStyle());
    this->setCursor(QCursor(QPixmap(":/resours/resourses/cursor/icons8-select-cursor-15.png")));
    ui->groupBox->setStyleSheet(Stylehelper::getGroupBoxStyle());
}

void tasks_graph::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}

void tasks_graph::render_graph()
{
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsGV);
    QPen pen_black(Qt::black);
    FILE* file = fopen(filenamer.toStdString().c_str(), "r");
    if (file == NULL)
    {
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Не удалось открыть файл!"));
        return;
    }
    bool hasData = false;
    std::map<QDate, int> dateTaskCount;
    Tasks task;
    while (fread(&task, sizeof(Tasks), 1, file) == 1)
    {
        hasData = true;
        dateTaskCount[task.date]++;
    }
    fclose(file);
    if (!hasData)
    {
        QGraphicsScene *emptyScene = new QGraphicsScene(ui->graphicsGV);
        ui->graphicsGV->setScene(emptyScene);
        return;
    }
    fclose(file);
    int maxTasks = 0;
    for (const auto &pair : dateTaskCount)
    {
        if (pair.second > maxTasks)
        {
            maxTasks = pair.second;
        }
    }

    QFont font;
    font.setPointSize(7);
    int graphHeight = ui->graphicsGV->height() - 50;
    for (int i = 0; i <= maxTasks; ++i)
    {
        int y = graphHeight - (i / (float)maxTasks) * graphHeight;
        scene->addText(QString::number(i), font)->setPos(-235, y + 15);
    }
    int x = -200;
    for (const auto &pair : dateTaskCount)
    {
        int y = (pair.second / (float)maxTasks) * graphHeight;
        QBrush brush(Qt::blue);
        scene->addRect(x, graphHeight - y + 20, 30, y, pen_black, brush);

        scene->addText(pair.first.toString("dd.MM.yyyy"), font)->setPos(x - 10, graphHeight + 30);
        x += 60;
    }
    scene->addLine(-215, 20, -215, graphHeight + 20, pen_black);
    scene->addLine(-215, graphHeight + 20, x, graphHeight + 20, pen_black);
    ui->graphicsGV->setScene(scene);
}


