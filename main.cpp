#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/resours/splash"));
    splash->resize(1024, 435);
    // Получение размера экрана
    int x = (splash->width()) / 2; // Расчет координаты x
    int y = (splash->height()) / 1.5; // Расчет координаты y
    splash->move(x, y); // Установка положения заставки по центру
    splash->show();

    Qt::Alignment bottomRigt = Qt::AlignRight | Qt::AlignBottom;
    splash->showMessage(QObject::trUtf8("Настройка главного окна..."), bottomRigt, Qt::black);
    MainWindow w;
    splash->showMessage(QObject::trUtf8("Загрузка..."), bottomRigt, Qt::black);
    splash->showMessage(QObject::trUtf8("Готово!"), bottomRigt, Qt::black);
    QTimer::singleShot(3000, [&](){
        splash->close();
        w.show();
    });

    return a.exec();
}
