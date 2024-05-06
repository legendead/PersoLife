#ifndef ABOUT_AUTHORS_H
#define ABOUT_AUTHORS_H

#include <QDialog>
#include <QPainter>

namespace Ui {
class about_authors;
}

class about_authors : public QDialog
{
    Q_OBJECT

public:
    explicit about_authors(QWidget *parent = 0);
    ~about_authors();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::about_authors *ui;
    void SetInterfaceStyle();//Изменение интерфейса
};

#endif // ABOUT_AUTHORS_H
