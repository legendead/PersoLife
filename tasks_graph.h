#ifndef TASKS_GRAPH_H
#define TASKS_GRAPH_H

#include <QDialog>
#include <QDate>

namespace Ui {
class tasks_graph;
}

class tasks_graph : public QDialog
{
    Q_OBJECT

public:
    explicit tasks_graph(QWidget *parent = nullptr);
    ~tasks_graph();
    QString filenamer;

private:
    Ui::tasks_graph *ui;
    void SetInterfaceStyle();

protected:
    void paintEvent(QPaintEvent *event);

public slots:
    void render_graph();
};

#endif
