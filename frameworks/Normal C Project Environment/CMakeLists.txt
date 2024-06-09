#! Put this file in the "pkg" file

# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(app)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 17)

# Add the main window source files
set(SOURCES
  ../../project/src/main.c
  ../../project/src/lib.c
)

# Add the main window header files
set(HEADERS
  ../../project/inc/inc.h
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})