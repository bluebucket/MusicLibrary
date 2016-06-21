cmake_minimum_required(VERSION 3.1.0)

project(MusicLibrary)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON) 

# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

add_subdirectory(src)
