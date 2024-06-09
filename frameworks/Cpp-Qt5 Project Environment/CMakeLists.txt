#! Put this file in the "pkg" file

# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(app)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 17)

# find the Qt5 pkg :: Wiggets Core Gui pkg
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

# Add the main window source files
set(SOURCES
  ../../project/src/main.cpp
  ../../project/src/lib.cpp
)

# Add the main window header files
set(HEADERS
  ../../project/inc/inc.hpp
)

# Automatically run moc, uic, and rcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# link the Qt5 pkg :: Wiggets Core Gui pkg
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui)