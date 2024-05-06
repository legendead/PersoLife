#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <file_creating.h>
#include <tasks_adding.h>
#include <about_authors.h>
#include <about_program.h>
#include <tasks_graph.h>
#include <instruction.h>
#include <QTableWidgetItem>
#include <QComboBox>
#include <QMessageBox>
#include <QCloseEvent>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_file_creating_action_triggered();
    void on_program_exit_action_triggered();
    void on_file_opening_action_triggered();
    void on_tasks_adding_action_triggered();
    void on_file_closing_action_triggered();
    void on_autors_action_triggered();
    void on_program_about_action_triggered();
    void on_tasks_graph_action_triggered();
    void on_pushButton_clicked();
    void on_combo_priority_currentIndexChanged(int index);
    void on_combo_date_currentIndexChanged(int index);
    void on_task_name_filter_textChanged(const QString &arg1);
    void on_strict_checkbox_clicked();
    void on_sens_checkbox_clicked();
    void on_tableWidget_itemChanged(QTableWidgetItem *item);
    void comboBoxValueChanged(const QString& newText, int i);
    void on_tasks_clear_all_triggered();
    void on_tasks_clear_done_triggered();
    void file_open_after_create(QString FileName);

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    file_creating *create_file = new file_creating;
    tasks_adding *adding = new tasks_adding(this);
    about_authors *authors = new about_authors;
    about_program *info = new about_program;
    tasks_graph *graph = new tasks_graph;
    Instruction *inst = new Instruction;
    bool isTableSetuped = false;
    bool fileopened = false;
    QString fileName;
    void SetInterfaceStyle();

protected:
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *event) override
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "PersoLife - выход", "Завершить работу программы?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            QMainWindow::closeEvent(event);
            exit(0);
        }
        else
            event->ignore();
    }
};
#endif
