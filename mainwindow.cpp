#ifndef MAINWINDOW
#define MAINWINDOW

#include <QMainWindow>
#include "mainwindow.h"

MainWindow::MainWindow()
{
    label = new QLabel(this);
    label->setText("Hello World!");
    setCentralWidget(label);
};

#endif
