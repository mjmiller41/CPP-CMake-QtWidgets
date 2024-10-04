#include <QtWidgets>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //! [create, resize and show]
    MainWindow window;
    window.resize(320, 240);
    window.show();
    //! [create, resize and show]
    window.setWindowTitle("MainWindow");
    return app.exec();
}
