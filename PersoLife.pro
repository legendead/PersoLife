QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about_program.cpp \
    file_creating.cpp \
    main.cpp \
    mainwindow.cpp \
    tasks_adding.cpp \
    about_authors.cpp \
    tasks_graph.cpp \
    stylehelper.cpp \
    instruction.cpp

HEADERS += \
    about_program.h \
    file_creating.h \
    mainwindow.h \
    tasks.h \
    tasks_adding.h \
    about_authors.h \
    tasks_graph.h \
    stylehelper.h \
    instruction.h

FORMS += \
    about_program.ui \
    file_creating.ui \
    mainwindow.ui \
    tasks_adding.ui \
    about_authors.ui \
    tasks_graph.ui \
    instruction.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    meres.qrc
