#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow
{
public:
    MainWindow();

private:
    QLabel *label;
};

#endif
