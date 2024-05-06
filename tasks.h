#ifndef TASKS_H
#define TASKS_H
#include <QTime>
#endif // TASKS_H

struct Tasks
{
    char name[50];
    char note[50];
    char status[50];
    int priority;
    QTime time_start;
    QTime time_end;
    QTime time_during;
    QDate date;
};
