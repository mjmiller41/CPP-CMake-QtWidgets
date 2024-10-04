cmake_minimum_required(VERSION 3.30)
project(CMakeQt VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_executable(CMakeQt
    main.cpp
    mainwindow.cpp
    mainwindow.h
)

target_link_libraries(CMakeQt PRIVATE Qt6::Widgets)
