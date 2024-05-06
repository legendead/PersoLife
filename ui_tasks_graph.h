/********************************************************************************
** Form generated from reading UI file 'tasks_graph.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKS_GRAPH_H
#define UI_TASKS_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_tasks_graph
{
public:
    QGroupBox *groupBox;
    QGraphicsView *graphicsGV;

    void setupUi(QDialog *tasks_graph)
    {
        if (tasks_graph->objectName().isEmpty())
            tasks_graph->setObjectName(QStringLiteral("tasks_graph"));
        tasks_graph->resize(582, 453);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\263\321\200\320\260\321\204\320\270\320\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasks_graph->setWindowIcon(icon);
        groupBox = new QGroupBox(tasks_graph);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 541, 411));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        graphicsGV = new QGraphicsView(groupBox);
        graphicsGV->setObjectName(QStringLiteral("graphicsGV"));
        graphicsGV->setGeometry(QRect(20, 30, 501, 361));
        graphicsGV->setFont(font);
        graphicsGV->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #fff;\n"
"border: 1px solid black;"));

        retranslateUi(tasks_graph);

        QMetaObject::connectSlotsByName(tasks_graph);
    } // setupUi

    void retranslateUi(QDialog *tasks_graph)
    {
        tasks_graph->setWindowTitle(QApplication::translate("tasks_graph", "PersoLife - \320\263\321\200\320\260\321\204\320\270\320\272 \320\267\320\260\320\264\320\260\321\207", 0));
        groupBox->setTitle(QApplication::translate("tasks_graph", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\264\320\260\321\207 \320\277\320\276 \320\264\320\260\321\202\320\260\320\274", 0));
    } // retranslateUi

};

namespace Ui {
    class tasks_graph: public Ui_tasks_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKS_GRAPH_H
