/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *file_creating_action;
    QAction *file_opening_action;
    QAction *file_closing_action;
    QAction *program_exit_action;
    QAction *program_about_action;
    QAction *autors_action;
    QAction *tasks_adding_action;
    QAction *tasks_graph_action;
    QAction *tasks_clear_all;
    QAction *tasks_clear_done;
    QAction *action;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_2;
    QLabel *label;
    QComboBox *combo_priority;
    QLabel *label_2;
    QComboBox *combo_date;
    QLabel *label_3;
    QLineEdit *task_name_filter;
    QCheckBox *strict_checkbox;
    QCheckBox *sens_checkbox;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(822, 454);
        MainWindow->setMinimumSize(QSize(822, 454));
        MainWindow->setMaximumSize(QSize(822, 565));
        MainWindow->setSizeIncrement(QSize(822, 565));
        MainWindow->setBaseSize(QSize(822, 565));
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resours/resourses/icons/icons8-\321\207\321\202\320\276-\321\217-\320\264\320\265\320\273\320\260\321\216-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        file_creating_action = new QAction(MainWindow);
        file_creating_action->setObjectName(QStringLiteral("file_creating_action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resours/resourses/icons/\321\204\320\260\320\271\320\273.png"), QSize(), QIcon::Normal, QIcon::Off);
        file_creating_action->setIcon(icon1);
        file_opening_action = new QAction(MainWindow);
        file_opening_action->setObjectName(QStringLiteral("file_opening_action"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\276\321\202\320\272\321\200\321\213\321\202\321\214-\320\277\320\260\320\277\320\272\321\203.png"), QSize(), QIcon::Normal, QIcon::Off);
        file_opening_action->setIcon(icon2);
        file_closing_action = new QAction(MainWindow);
        file_closing_action->setObjectName(QStringLiteral("file_closing_action"));
        file_closing_action->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\267\320\260\320\272\321\200\321\213\321\202\321\214.png"), QSize(), QIcon::Normal, QIcon::Off);
        file_closing_action->setIcon(icon3);
        program_exit_action = new QAction(MainWindow);
        program_exit_action->setObjectName(QStringLiteral("program_exit_action"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\262\321\213\321\205\320\276\320\264.png"), QSize(), QIcon::Normal, QIcon::Off);
        program_exit_action->setIcon(icon4);
        program_about_action = new QAction(MainWindow);
        program_about_action->setObjectName(QStringLiteral("program_about_action"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\262\320\276\320\277\321\200\320\276\321\201.png"), QSize(), QIcon::Normal, QIcon::Off);
        program_about_action->setIcon(icon5);
        autors_action = new QAction(MainWindow);
        autors_action->setObjectName(QStringLiteral("autors_action"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\260\320\262\321\202\320\276\321\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        autors_action->setIcon(icon6);
        tasks_adding_action = new QAction(MainWindow);
        tasks_adding_action->setObjectName(QStringLiteral("tasks_adding_action"));
        tasks_adding_action->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214_\320\267\320\260\320\264\320\260\321\207\321\203.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasks_adding_action->setIcon(icon7);
        tasks_graph_action = new QAction(MainWindow);
        tasks_graph_action->setObjectName(QStringLiteral("tasks_graph_action"));
        tasks_graph_action->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\263\321\200\320\260\321\204\320\270\320\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasks_graph_action->setIcon(icon8);
        tasks_clear_all = new QAction(MainWindow);
        tasks_clear_all->setObjectName(QStringLiteral("tasks_clear_all"));
        tasks_clear_all->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resours/resourses/icons/\321\203\320\264\320\260\320\273\320\270\321\202\321\214-\320\262\321\201\320\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasks_clear_all->setIcon(icon9);
        tasks_clear_done = new QAction(MainWindow);
        tasks_clear_done->setObjectName(QStringLiteral("tasks_clear_done"));
        tasks_clear_done->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resours/resourses/icons/\321\203\320\264\320\260\320\273\320\270\321\202\321\214-\321\201\320\264\320\265\320\273\320\260\320\275\320\275\321\213\320\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasks_clear_done->setIcon(icon10);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resours/resourses/icons/icons8-\321\202\321\200\320\265\320\275\320\265\321\200-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(false);
        groupBox->setGeometry(QRect(20, 15, 781, 261));
        groupBox->setToolTipDuration(-1);
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 30, 741, 211));
        tableWidget->setMaximumSize(QSize(741, 16777215));
        tableWidget->setAutoScroll(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(105);
        tableWidget->horizontalHeader()->setMinimumSectionSize(39);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(false);
        groupBox_2->setGeometry(QRect(20, 290, 781, 121));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 112, 16));
        combo_priority = new QComboBox(groupBox_2);
        combo_priority->setObjectName(QStringLiteral("combo_priority"));
        combo_priority->setGeometry(QRect(150, 30, 140, 22));
        combo_priority->setFont(font);
        combo_priority->setCursor(QCursor(Qt::PointingHandCursor));
        combo_priority->setToolTipDuration(-1);
        combo_priority->setStyleSheet(QLatin1String("QComboBox{\n"
"	background: none;\n"
"	background-color: #fff;\n"
"	border: 1px solid #000000;\n"
"	border-radius: 5px;\n"
"}\n"
"QCombobox::disabled{\n"
"	background-color: rgb(240, 240, 240);\n"
"	border: 1px solid #cccccc;\n"
"}\n"
""));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 73, 101, 16));
        combo_date = new QComboBox(groupBox_2);
        combo_date->setObjectName(QStringLiteral("combo_date"));
        combo_date->setGeometry(QRect(150, 71, 140, 22));
        combo_date->setFont(font);
        combo_date->setCursor(QCursor(Qt::PointingHandCursor));
        combo_date->setStyleSheet(QLatin1String("QComboBox{\n"
"	background: none;\n"
"	border: 1px solid #000000;\n"
"	border-radius: 5px;\n"
"}\n"
"QCombobox::disabled{\n"
"	background-color: rgb(240, 240, 240);\n"
"	border: 1px solid #cccccc;\n"
"}"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 30, 101, 16));
        task_name_filter = new QLineEdit(groupBox_2);
        task_name_filter->setObjectName(QStringLiteral("task_name_filter"));
        task_name_filter->setGeometry(QRect(470, 30, 140, 20));
        task_name_filter->setFont(font);
        task_name_filter->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color: none;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 1px solid #000000;\n"
"	border-radius: 5px;\n"
"}\n"
"QLineEdit::disabled{\n"
"	background-color: rgb(240, 240, 240);\n"
"	border: 1px solid #cccccc\n"
"}"));
        strict_checkbox = new QCheckBox(groupBox_2);
        strict_checkbox->setObjectName(QStringLiteral("strict_checkbox"));
        strict_checkbox->setGeometry(QRect(330, 73, 139, 17));
        strict_checkbox->setCursor(QCursor(Qt::PointingHandCursor));
        sens_checkbox = new QCheckBox(groupBox_2);
        sens_checkbox->setObjectName(QStringLiteral("sens_checkbox"));
        sens_checkbox->setGeometry(QRect(480, 73, 133, 17));
        sens_checkbox->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 822, 21));
        menubar->setStyleSheet(QLatin1String("QMenuBar{\n"
"               background: none;\n"
"               background-color: qlineargradient(spread:pad, x1:0.0170455, y1:0.324, x2:0, y2:0, stop:0 rgba(241, 241, 241, 255), stop:1 rgba(182, 182, 182, 255));\n"
"           };"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setFont(font);
        menu->setStyleSheet(QLatin1String("QMenu{\n"
"      background: none;\n"
"      background-color: qlineargradient(spread:pad, x1:0.0170455, y1:0.324, x2:0, y2:0, stop:0 rgba(241, 241, 241, 255), stop:1 rgba(182, 182, 182, 255));\n"
"       color: #000000;\n"
"        border: 1px solid #cccccc;\n"
"}\n"
"QMenu::item:disabled{\n"
"	background-color: #cccccc;\n"
"}"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_2->setFont(font);
        menu_2->setStyleSheet(QLatin1String("QMenu{\n"
"      background: none;\n"
"      background-color: qlineargradient(spread:pad, x1:0.0170455, y1:0.324, x2:0, y2:0, stop:0 rgba(241, 241, 241, 255), stop:1 rgba(182, 182, 182, 255));\n"
"       color: #000000;\n"
"        border: 1px solid #cccccc;\n"
"}\n"
"QMenu::item:disabled{\n"
"	background-color: #cccccc;\n"
"}"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_3->setFont(font);
        menu_3->setStyleSheet(QLatin1String("QMenu{\n"
"      background: none;\n"
"      background-color: qlineargradient(spread:pad, x1:0.0170455, y1:0.324, x2:0, y2:0, stop:0 rgba(241, 241, 241, 255), stop:1 rgba(182, 182, 182, 255));\n"
"       color: #000000;\n"
"        border: 1px solid #cccccc;\n"
"}\n"
"QMenu::item:disabled{\n"
"	background-color: #cccccc;\n"
"}"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(file_creating_action);
        menu->addAction(file_opening_action);
        menu->addAction(file_closing_action);
        menu->addSeparator();
        menu->addAction(program_exit_action);
        menu_2->addAction(program_about_action);
        menu_2->addAction(autors_action);
        menu_2->addAction(action);
        menu_3->addAction(tasks_adding_action);
        menu_3->addAction(tasks_graph_action);
        menu_3->addAction(tasks_clear_all);
        menu_3->addAction(tasks_clear_done);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PersoLife - \320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\321\211\320\270\320\272 \320\267\320\260\320\264\320\260\321\207", 0));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276 PersoLife", 0));
#endif // QT_NO_TOOLTIP
        file_creating_action->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
        file_creating_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        file_opening_action->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        file_opening_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        file_closing_action->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        file_closing_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        program_exit_action->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        program_exit_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        program_about_action->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", 0));
        program_about_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        autors_action->setText(QApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", 0));
        autors_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        tasks_adding_action->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        tasks_adding_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        tasks_graph_action->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272 \320\267\320\260\320\264\320\260\321\207", 0));
        tasks_graph_action->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0));
        tasks_clear_all->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        tasks_clear_all->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0));
        tasks_clear_done->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\201\320\264\320\265\320\273\320\260\320\275\320\275\321\213\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        tasks_clear_done->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0));
        action->setText(QApplication::translate("MainWindow", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+F1", 0));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\201 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\265\320\271 \320\276 \320\262\321\201\320\265\321\205 \320\267\320\260\320\264\320\260\321\207\320\260\321\205", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\262\321\201\320\265\321\205 \320\267\320\260\320\264\320\260\321\207\320\260\321\205", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\267\320\260\320\264\320\260\321\207", 0));
        label->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        combo_priority->clear();
        combo_priority->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\236\321\202 1 \320\264\320\276 5", 0)
         << QApplication::translate("MainWindow", "\320\236\321\202 5 \320\264\320\276 1", 0)
        );
#ifndef QT_NO_TOOLTIP
        combo_priority->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\277\320\276 \320\277\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202\321\203 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        combo_date->clear();
        combo_date->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\236\321\202 \321\201\321\202\320\260\321\200\321\213\321\205 \320\272 \320\275\320\276\320\262\321\213\320\274", 0)
         << QApplication::translate("MainWindow", "\320\236\321\202 \320\275\320\276\320\262\321\213\321\205 \320\272 \321\201\321\202\320\260\321\200\321\213\320\274", 0)
        );
#ifndef QT_NO_TOOLTIP
        combo_date->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\277\320\276 \320\264\320\260\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#ifndef QT_NO_TOOLTIP
        task_name_filter->setToolTip(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \320\264\320\273\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        strict_checkbox->setToolTip(QApplication::translate("MainWindow", "\320\222\320\272\320\273. / \320\262\321\213\320\272\320\273. \321\201\321\202\321\200\320\276\320\263\320\276\320\263\320\276 \321\204\320\270\320\273\321\214\321\202\321\200\320\260 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        strict_checkbox->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\263\320\270\320\271 \321\204\320\270\320\273\321\214\321\202\321\200", 0));
#ifndef QT_NO_TOOLTIP
        sens_checkbox->setToolTip(QApplication::translate("MainWindow", "\320\222\320\272\320\273. / \320\262\321\213\320\272\320\273. \321\207\321\203\320\262\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270 \320\272 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\321\203 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        sens_checkbox->setText(QApplication::translate("MainWindow", "\320\247\321\203\320\262\321\201\321\202. \320\272 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\321\203", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
