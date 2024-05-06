/********************************************************************************
** Form generated from reading UI file 'tasks_adding.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKS_ADDING_H
#define UI_TASKS_ADDING_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_tasks_adding
{
public:
    QGroupBox *groupBox;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit_start;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTimeEdit *timeEdit_end;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLineEdit *name_edit;
    QLabel *label_5;
    QSlider *during_slider;
    QLabel *label_6;
    QLineEdit *note_edit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;

    void setupUi(QDialog *tasks_adding)
    {
        if (tasks_adding->objectName().isEmpty())
            tasks_adding->setObjectName(QStringLiteral("tasks_adding"));
        tasks_adding->resize(364, 375);
        QFont font;
        font.setPointSize(10);
        tasks_adding->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resours/resourses/icons/icons8-\320\267\320\260\320\277\320\270\321\201\321\214-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasks_adding->setWindowIcon(icon);
        groupBox = new QGroupBox(tasks_adding);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 321, 141));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(200, 30, 101, 22));
        QFont font1;
        font1.setPointSize(8);
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QLatin1String("QDateEdit{\n"
"background: none;\n"
"border: 1px solid #000000;\n"
"border-radius: 5px;\n"
"}"));
        dateEdit->setMinimumDate(QDate(2023, 7, 11));
        timeEdit_start = new QTimeEdit(groupBox);
        timeEdit_start->setObjectName(QStringLiteral("timeEdit_start"));
        timeEdit_start->setGeometry(QRect(200, 65, 101, 22));
        timeEdit_start->setStyleSheet(QLatin1String("QTimeEdit{\n"
"background: none;\n"
"border: 1px solid #000000;\n"
"border-radius: 5px;\n"
"}"));
        timeEdit_start->setTime(QTime(10, 0, 0));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 111, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 65, 132, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 127, 16));
        timeEdit_end = new QTimeEdit(groupBox);
        timeEdit_end->setObjectName(QStringLiteral("timeEdit_end"));
        timeEdit_end->setGeometry(QRect(200, 100, 101, 22));
        timeEdit_end->setStyleSheet(QLatin1String("QTimeEdit{\n"
"background: none;\n"
"border: 1px solid #000000;\n"
"border-radius: 5px;\n"
"}"));
        timeEdit_end->setTime(QTime(12, 0, 0));
        groupBox_2 = new QGroupBox(tasks_adding);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 170, 321, 146));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 61, 16));
        name_edit = new QLineEdit(groupBox_2);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setGeometry(QRect(140, 30, 161, 20));
        name_edit->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color: none;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 1px solid #000000;\n"
"	border-radius: 5px;\n"
"}\n"
"QLineEdit::disabled{\n"
"	background-color: rgb(240, 240, 240);\n"
"	border: 1px solid #cccccc\n"
"}"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 111, 16));
        during_slider = new QSlider(groupBox_2);
        during_slider->setObjectName(QStringLiteral("during_slider"));
        during_slider->setGeometry(QRect(140, 100, 160, 22));
        during_slider->setCursor(QCursor(Qt::ClosedHandCursor));
        during_slider->setMinimum(1);
        during_slider->setMaximum(5);
        during_slider->setOrientation(Qt::Horizontal);
        during_slider->setInvertedAppearance(false);
        during_slider->setInvertedControls(false);
        during_slider->setTickPosition(QSlider::TicksBelow);
        during_slider->setTickInterval(1);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 65, 61, 16));
        note_edit = new QLineEdit(groupBox_2);
        note_edit->setObjectName(QStringLiteral("note_edit"));
        note_edit->setGeometry(QRect(140, 65, 161, 20));
        note_edit->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color: none;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 1px solid #000000;\n"
"	border-radius: 5px;\n"
"}\n"
"QLineEdit::disabled{\n"
"	background-color: rgb(240, 240, 240);\n"
"	border: 1px solid #cccccc\n"
"}"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(143, 124, 16, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 124, 16, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(218, 124, 16, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(255, 124, 16, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(291, 124, 16, 16));
        pushButton = new QPushButton(tasks_adding);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 330, 100, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"               background: none;\n"
"               border: none;\n"
"               background-color: qlineargradient(spread:pad, x1:0.966, y1:1, x2:0.392, y2:0.420455, stop:0 rgba(59, 105, 162, 255), stop:1 rgba(96, 177, 236, 255));\n"
"               border: 1px solid #000000;\n"
"               border-color: qlineargradient(spread:pad, x1:0.966, y1:1, x2:0.392, y2:0.420455, stop:0 rgba(59, 105, 162, 255), stop:1 rgba(96, 177, 236, 255));\n"
"               border-radius:15px;\n"
"color:#fff;\n"
"           }\n"
"QPushButton::hover{\n"
"background: none;\n"
"		border: none;\n"
"	background-color: qlineargradient(spread:pad, x1:0.364, y1:0.420455, x2:1, y2:0.955, stop:0 rgba(90, 164, 255, 255), stop:0.664773 rgba(23, 79, 208, 255));\n"
"	border: 1px solid #000000;\n"
"	border-color: qlineargradient(spread:pad, x1:0.364, y1:0.420455, x2:1, y2:0.955, stop:0 rgba(90, 164, 255, 255), stop:0.664773 rgba(23, 79, 208, 255));\n"
"	border-radius:15px;\n"
"           }"));

        retranslateUi(tasks_adding);

        QMetaObject::connectSlotsByName(tasks_adding);
    } // setupUi

    void retranslateUi(QDialog *tasks_adding)
    {
        tasks_adding->setWindowTitle(QApplication::translate("tasks_adding", "PersoLife - \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207", 0));
#ifndef QT_NO_TOOLTIP
        tasks_adding->setToolTip(QApplication::translate("tasks_adding", "\320\236\320\272\320\275\320\276 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\320\264\320\260\321\207", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("tasks_adding", "\320\222\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\320\270 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#ifndef QT_NO_TOOLTIP
        dateEdit->setToolTip(QApplication::translate("tasks_adding", "\320\222\321\213\320\261\320\276\321\200 \320\264\320\260\321\202\321\213 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        timeEdit_start->setToolTip(QApplication::translate("tasks_adding", "\320\222\321\213\320\261\320\276\321\200 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\275\320\260\321\207\320\260\320\273\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("tasks_adding", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        label_2->setText(QApplication::translate("tasks_adding", "\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
        label_3->setText(QApplication::translate("tasks_adding", "\320\222\321\200\320\265\320\274\321\217 \320\272\320\276\320\275\321\206\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#ifndef QT_NO_TOOLTIP
        timeEdit_end->setToolTip(QApplication::translate("tasks_adding", "\320\222\321\213\320\261\320\276\321\200 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\272\320\276\320\275\321\206\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("tasks_adding", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\267\320\260\320\264\320\260\321\207\320\265", 0));
        label_4->setText(QApplication::translate("tasks_adding", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
#ifndef QT_NO_TOOLTIP
        name_edit->setToolTip(QApplication::translate("tasks_adding", "\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("tasks_adding", "\320\237\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202", 0));
#ifndef QT_NO_TOOLTIP
        during_slider->setToolTip(QApplication::translate("tasks_adding", "\320\241\320\273\320\260\320\271\320\264\320\265\321\200 \320\262\321\213\320\261\320\276\321\200\320\260 \320\277\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("tasks_adding", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260", 0));
#ifndef QT_NO_TOOLTIP
        note_edit->setToolTip(QApplication::translate("tasks_adding", "\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\267\320\260\320\274\320\265\321\202\320\272\320\270 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("tasks_adding", "1", 0));
        label_8->setText(QApplication::translate("tasks_adding", "2", 0));
        label_9->setText(QApplication::translate("tasks_adding", "3", 0));
        label_10->setText(QApplication::translate("tasks_adding", "4", 0));
        label_11->setText(QApplication::translate("tasks_adding", "5", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("tasks_adding", "\320\232\320\275\320\276\320\277\320\272\320\260 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\267\320\260\320\264\320\260\321\207\320\270", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("tasks_adding", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class tasks_adding: public Ui_tasks_adding {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKS_ADDING_H
