/********************************************************************************
** Form generated from reading UI file 'file_creating.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_CREATING_H
#define UI_FILE_CREATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_file_creating
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *file_name;
    QPushButton *create_button;
    QPushButton *cancle_button;

    void setupUi(QDialog *file_creating)
    {
        if (file_creating->objectName().isEmpty())
            file_creating->setObjectName(QStringLiteral("file_creating"));
        file_creating->resize(250, 104);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resours/resourses/icons/\321\204\320\260\320\271\320\273.png"), QSize(), QIcon::Normal, QIcon::Off);
        file_creating->setWindowIcon(icon);
        groupBox = new QGroupBox(file_creating);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 231, 89));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        file_name = new QLineEdit(groupBox);
        file_name->setObjectName(QStringLiteral("file_name"));

        gridLayout->addWidget(file_name, 0, 0, 1, 2);

        create_button = new QPushButton(groupBox);
        create_button->setObjectName(QStringLiteral("create_button"));

        gridLayout->addWidget(create_button, 1, 0, 1, 1);

        cancle_button = new QPushButton(groupBox);
        cancle_button->setObjectName(QStringLiteral("cancle_button"));

        gridLayout->addWidget(cancle_button, 1, 1, 1, 1);


        retranslateUi(file_creating);

        QMetaObject::connectSlotsByName(file_creating);
    } // setupUi

    void retranslateUi(QDialog *file_creating)
    {
        file_creating->setWindowTitle(QApplication::translate("file_creating", "PersoLife - \321\201\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", 0));
#ifndef QT_NO_TOOLTIP
        file_creating->setToolTip(QApplication::translate("file_creating", "\320\236\320\272\320\275\320\276 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("file_creating", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("file_creating", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260 (\321\201 \321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\265\320\274)", 0));
#ifndef QT_NO_TOOLTIP
        file_name->setToolTip(QApplication::translate("file_creating", "\320\237\320\276\320\273\320\265 \320\262\320\262\320\276\320\264\320\260 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        create_button->setToolTip(QApplication::translate("file_creating", "\320\232\320\275\320\276\320\277\320\272\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\260", 0));
#endif // QT_NO_TOOLTIP
        create_button->setText(QApplication::translate("file_creating", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
#ifndef QT_NO_TOOLTIP
        cancle_button->setToolTip(QApplication::translate("file_creating", "\320\232\320\275\320\276\320\277\320\272\320\260 \320\276\321\202\320\274\320\265\320\275\321\213 ", 0));
#endif // QT_NO_TOOLTIP
        cancle_button->setText(QApplication::translate("file_creating", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class file_creating: public Ui_file_creating {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_CREATING_H
