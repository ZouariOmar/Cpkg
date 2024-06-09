#! Put this file in the "pkg" file

# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(app)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 17)

# find the Qt5 pkg :: Wiggets pkg
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# add the main.cpp file as a source file
add_executable(${PROJECT_NAME} ../../project/src/main.cpp)

# link the Qt5 pkg :: Wiggets pkg
target_link_libraries(SimpleQtApp Qt5::Widgets)