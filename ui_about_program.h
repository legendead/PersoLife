/********************************************************************************
** Form generated from reading UI file 'about_program.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_PROGRAM_H
#define UI_ABOUT_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_about_program
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *about_program)
    {
        if (about_program->objectName().isEmpty())
            about_program->setObjectName(QStringLiteral("about_program"));
        about_program->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\262\320\276\320\277\321\200\320\276\321\201.png"), QSize(), QIcon::Normal, QIcon::Off);
        about_program->setWindowIcon(icon);
        textBrowser = new QTextBrowser(about_program);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(9, 10, 382, 270));
        QFont font;
        font.setPointSize(11);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QLatin1String("QTextBrowser{\n"
"	background: none;\n"
"	border: none;\n"
"	background-color: #fff;\n"
"	border: 1px solid black;\n"
"}"));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        retranslateUi(about_program);

        QMetaObject::connectSlotsByName(about_program);
    } // setupUi

    void retranslateUi(QDialog *about_program)
    {
        about_program->setWindowTitle(QApplication::translate("about_program", "PersoLife - \320\276 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", 0));
        textBrowser->setHtml(QApplication::translate("about_program", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;PersoLife&quot; - \321\215\321\202\320\276 \321\203\320\264\320\276\320\261\320\275\321\213\320\271 \320\262 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\320\270 \320\276\321\200\320\263\320\260\320\275\320\260\320\271\320\267\320\265\321\200, \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\321\213\320\271 \320\264\320\273\321\217 \320\277\320\276\320\274\320\276\321\211\320\270 \320\262 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206"
                        "\320\270\320\270 \320\262\320\260\321\210\320\265\320\271 \320\277\320\276\320\262\321\201\320\265\320\264\320\275\320\265\320\262\320\275\320\276\320\271 \320\266\320\270\320\267\320\275\320\270. \320\255\321\202\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\265\320\264\320\276\321\201\321\202\320\260\320\262\320\273\321\217\320\265\321\202 \321\210\320\270\321\200\320\276\320\272\320\270\320\271 \321\201\320\277\320\265\320\272\321\202\321\200 \321\204\321\203\320\275\320\272\321\206\320\270\320\271 \320\270 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\277\320\276\320\274\320\276\320\263\321\203\321\202 \320\262\320\260\320\274 \320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\262\320\276\320\270 \320\267\320\260\320\264\320\260\321\207\320\270, \321\203\320\277\321\200\320\260\320\262\320"
                        "\273\321\217\321\202\321\214 \320\262\321\200\320\265\320\274\320\265\320\275\320\265\320\274, \321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262\320\260\320\266\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\270 \320\276\321\201\321\202\320\260\320\262\320\260\321\202\321\214\321\201\321\217 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\276\320\262\320\260\320\275\320\275\321\213\320\274 \320\262 \320\273\321\216\320\261\320\276\320\271 \321\201\321\204\320\265\321\200\320\265 \320\262\320\260\321\210\320\265\320\271 \320\266\320\270\320\267\320\275\320\270. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\320\264\320\275\320\276\320\271 \320\270\320\267 \320\272\320\273\321\216\321\207\320\265\320\262\321\213\321\205 \320\276\321\201\320\276\320\261\320\265\320\275\320\275\320\276\321\201\321\202\320\265\320\271 &quot;PersoLife&quot; \321\217\320\262\320\273"
                        "\321\217\320\265\321\202\321\201\321\217 \320\265\320\263\320\276 \320\270\320\275\321\202\321\203\320\270\321\202\320\270\320\262\320\275\320\276 \320\277\320\276\320\275\321\217\321\202\320\275\321\213\320\271 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201, \321\207\321\202\320\276 \320\264\320\265\320\273\320\260\320\265\321\202 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\277\321\200\320\276\321\201\321\202\321\213\320\274 \320\270 \320\277\321\200\320\270\321\217\321\202\320\275\321\213\320\274. \320\222\321\213 \321\201\320\274\320\276\320\266\320\265\321\202\320\265 \320\273\320\265\320\263\320\272\320\276 \321\201\320\276\320\267\320\264\320\260\320\262\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\203\321\201\321\202\320\260\320\275\320\260\320\262\320\273\320"
                        "\270\320\262\320\260\321\202\321\214 \320\277\321\200\320\270\320\276\321\200\320\270\321\202\320\265\321\202\321\213 \320\270 \320\264\320\265\320\264\320\273\320\260\320\271\320\275\321\213 \320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\270\320\267 \320\275\320\270\321\205. </p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241 &quot;PersoLife&quot; \320\262\321\213 \321\201\320\274\320\276\320\266\320\265\321\202\320\265 \321\215\321\204\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\276 \321\203\320\277\321\200\320\260\320\262\320\273\321\217\321\202\321\214 \321\201\320\262\320\276\320\270\320\274 \320\262\321\200\320\265\320\274\320\265\320\275\320\265\320\274, \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\276\320\262\321\213\320\262\320\260\321\202\321\214 \321\201\320\262\320\276\321\216 \320\266\320\270\320\267\320\275\321\214 \320\270 \320\264\320\276"
                        "\321\201\321\202\320\270\320\263\320\260\321\202\321\214 \320\277\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\275\321\213\321\205 \321\206\320\265\320\273\320\265\320\271. \320\235\320\265\320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276 \320\276\321\202 \321\202\320\276\320\263\320\276, \320\275\321\203\320\266\320\275\320\276 \320\273\320\270 \320\262\320\260\320\274 \320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\207\320\270\321\205 \320\267\320\260\320\264\320\260\321\207, \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\273\320\270\321\207\320\275\321\213\320\274\320\270 \320\277\321\200\320\276\320\265\320\272\321\202\320\260\320\274\320\270 \320\270\320\273\320\270 \320\277\321\200\320\276\321\201\321\202\320\276 \320\275\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\321\217 \320\276 \320\277\320\276\320\262\321\201\320"
                        "\265\320\264\320\275\320\265\320\262\320\275\321\213\321\205 \320\264\320\265\320\273\320\260\321\205.</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;PersoLife&quot; \320\261\321\203\320\264\320\265\321\202 \320\262\320\260\321\210\320\270\320\274 \320\275\320\260\320\264\320\265\320\266\320\275\321\213\320\274 \320\277\320\276\320\274\320\276\321\211\320\275\320\270\320\272\320\276\320\274 \320\262 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270 \320\270 \321\203\320\277\320\276\321\200\321\217\320\264\320\276\321\207\320\265\320\275\320\270\320\270 \320\262\320\260\321\210\320\265\320\271 \320\266\320\270\320\267\320\275\320\270</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\201\321\213\320\273\320\272\320\270 \320\275\320\260 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320"
                        "\272\320\270:</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\201\320\265 \320\270\320\272\320\276\320\275\320\272\320\270 \320\262 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270 \320\261\321\213\320\273\320\270 \320\262\320\267\321\217\321\202\321\213 \321\201 \321\201\320\260\320\271\321\202\320\260: https://icons8.ru<br />\320\227\320\260\321\201\321\202\320\260\320\262\320\272\320\260 \320\272 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\216 \320\261\321\213\320\273\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \321\201 \320\277\320\276\320\274\320\276\321\210\321\214\321\216 \320\275\320\265\320\271\321\200\320\276\321\201\320\265\321\202\320\270: Kandinsky 2.2</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class about_program: public Ui_about_program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_PROGRAM_H
