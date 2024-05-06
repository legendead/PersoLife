#include "stylehelper.h"


QString Stylehelper::getMainWidgetStyle()
{
    return "QWidget{"
           "   background-image: url(:/resours/resourses/background/ффф.jpg);"
           "}";
}

QString Stylehelper::getGroupBoxStyle()
{
    return "QGroupBox{"
           "    background: none;"
           "    background-color: transparent;"
           "}";
}

QString Stylehelper::getMenuBarStyle()
{
    return "QMenuBar{"
           "    background: none;"
           "    background-color: qlineargradient(spread:pad, x1:0.0170455, y1:0.324, x2:0, y2:0, stop:0 rgba(241, 241, 241, 255), stop:1 rgba(182, 182, 182, 255));"
           "}";
}
//Изменить границы и цвет бг
QString Stylehelper::getMenuStyle()
{
    return "QMenu{"
           "    background: none;"
           "    background-color: qlineargradient(spread:pad, x1:0.0170455, y1:0.324, x2:0, y2:0, stop:0 rgba(241, 241, 241, 255), stop:1 rgba(182, 182, 182, 255));"
           "    color: #000000;"
           "    border: 1px solid #cccccc;"
           "}"
           "QMenu::item:disabled{"
           "    background-color: #cccccc;"
           "}";
}
//Изменить бг строк
//Не ебу, как добраться до кнопок в таблице
QString Stylehelper::getTableWidgetStyle()
{
    return "QTableWidget{"
           "    background: none;"
           "    background-color: #fff;"
           "}"
           "QTableWidget::disabled{"
           "    background-color: rgb(240, 240, 240);"
           "}"
           "QTableWidget::row{"
           "    background: none;"
           "    background-color: #fff;"
           "}";
}

QString Stylehelper::getLabelWidgetStyle()
{
    return "QLabel{"
           "    background: none;"
           "    background-color: transparent;"
           "}";
}

QString Stylehelper::getCheckBoxWidgetStyle()
{
    return "QCheckBox{"
           "    background: none;"
           "    background-color: transparent;"
           "}";
}

QString Stylehelper::getLineEditWidgetStyle()
{
    return "QLineEdit{"
           "    background: none;"
           "    background-color: #fff;"
           "    border: 1px solid #000000;"
           "    border-radius: 5px;"
           "}"
           "QLineEdit::disabled{"
           "    background-color: rgb(240, 240, 240);"
           "    border: 1px solid #cccccc;"
           "}";
}
//измениь фон выпадающего списка
QString Stylehelper::getComboBoxWidgetStyle()
{
    return "QComboBox{"
           "    background: none;"
           "    background-color: #fff;"
           "}"
           "QComboBox::disabled{"
           "    background-color: rgb(240, 240, 240)"
           "}"
           "QComboBox QAbstractItemView{"
           "    border: none;"
           "    border: 1px solid darkgray;"
           "    background: none;"
           "    background-color: #fff;"
           "}";
}

QString Stylehelper::getPushButtonWidgetStyle()
{
    return "QPushButton{"
           "    background: none;"
           "    border: none;"
           "    background-color: qlineargradient(spread:pad, x1:0.966, y1:1, x2:0.392, y2:0.420455, stop:0 rgba(59, 105, 162, 255), stop:1 rgba(96, 177, 236, 255));"
           "    border: 1px solid #000000;"
           "    border-color: qlineargradient(spread:pad, x1:0.966, y1:1, x2:0.392, y2:0.420455, stop:0 rgba(59, 105, 162, 255), stop:1 rgba(96, 177, 236, 255));"
           "    border-radius:15px;"
           "}"
           "QPushButton::hover{"
           "    background: none;"
           "    border: none;"
           "    background-color: qlineargradient(spread:pad, x1:0.364, y1:0.420455, x2:1, y2:0.955, stop:0 rgba(90, 164, 255, 255), stop:0.664773 rgba(23, 79, 208, 255));"
           "    border: 1px solid #000000;"
           "    border-color: qlineargradient(spread:pad, x1:0.364, y1:0.420455, x2:1, y2:0.955, stop:0 rgba(90, 164, 255, 255), stop:0.664773 rgba(23, 79, 208, 255));"
           "    border-radius:15px;"
           "}";
}

QString Stylehelper::getTimeWidgetStyle()
{
    return "QTimeEdit{"
           "    background: none;"
           "    background-color: #fff;"
           "}";
}

QString Stylehelper::getSliderWidgetStyle()
{
    return "QSlider{"
           "    background: none;"
           "    background-color: transparent;"
           "}";
}

QString Stylehelper::getDateEditWidgetStyle()
{
    return "QDateEdit{"
           "    background: none;"
           "    background-color: #fff;"
           "}";
}

QString Stylehelper::getPushButton_1_WidgetStyle()
{
    return "QPushButton{"
           "    background: none;"
           "    border: none;"
           "    background-color: #fff;"
           "    border: 1px solid #000000;"
           "}";
}

