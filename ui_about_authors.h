/********************************************************************************
** Form generated from reading UI file 'about_authors.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_AUTHORS_H
#define UI_ABOUT_AUTHORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_about_authors
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *about_authors)
    {
        if (about_authors->objectName().isEmpty())
            about_authors->setObjectName(QStringLiteral("about_authors"));
        about_authors->setWindowModality(Qt::WindowModal);
        about_authors->resize(400, 300);
        QFont font;
        font.setPointSize(10);
        about_authors->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resours/resourses/icons/\320\260\320\262\321\202\320\276\321\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        about_authors->setWindowIcon(icon);
        textBrowser = new QTextBrowser(about_authors);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 361, 261));
        QFont font1;
        font1.setPointSize(11);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QLatin1String("background: none;\n"
"background-color: transparent;\n"
"border: none;"));

        retranslateUi(about_authors);

        QMetaObject::connectSlotsByName(about_authors);
    } // setupUi

    void retranslateUi(QDialog *about_authors)
    {
        about_authors->setWindowTitle(QApplication::translate("about_authors", "PersoLife - \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", 0));
        textBrowser->setHtml(QApplication::translate("about_authors", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260\320\264 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\320\260\320\273\320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\321\213 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 &quot;\320\230\320\275\321\204\320\276\320\272\320\276\320\274\320\274\321\203\320\275\320\270\320\272\320\260\321\206\320\270\320\276\320\275\320\275\321\213\320\265 \321\202\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270"
                        "\320\270 \320\270 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \321\201\320\262\321\217\320\267\320\270&quot; \320\263\321\200\321\203\320\277\320\277: \320\240\320\230-121111, \320\240\320\230-121110:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\220\320\274\320\270\320\275\320\276\320\262 \320\230\320\273\321\214\321\217\321\201 \320\244\320\260\321\200\320\270\321\202\320\276\320\262\320\270\321\207</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />\320\225\321\200\321\210\320\276\320\262 \320\225\320\263\320\276\321\200 \320\234\320\260\320\272\321\201\320\270\320\274\320\276\320\262\320\270\321\207</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />\320\234\320\260\320\274\320\265\320\264\320\260\320\273\320\270\320\275 \320\222\320\273\320\260\320\264\320\270\321\201\320\273\320\260\320\262 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\270\321\207</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />\320\232\320\273\320\270\320\274\321\207\320\265\320\275\320\272\320\276 \320\220\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200 \320\222\320\270\320\272\321\202\320\276\321\200\320\276\320\262\320\270\321\207</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class about_authors: public Ui_about_authors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_AUTHORS_H
