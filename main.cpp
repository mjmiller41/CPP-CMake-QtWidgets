/* Copyright 2024 Michael Joseph Miller

This file is part of ProjectName: #{project_name}.

ProjectName: #{project_name} is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

ProjectName: #{project_name} is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with ProjectName: #{project_name}. If not, see <https://www.gnu.org/licenses/>.*/

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
