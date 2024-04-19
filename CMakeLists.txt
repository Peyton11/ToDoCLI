# @file CMakeLists.txt
#
# CMakefiles files for ToDoCLI project

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.28)

# project info
project(ToDoCLI)

set(CMAKE_CXX_STANDARD 17)

add_executable(ToDoCLI main.cpp ToDoList.cpp FileHandler.cpp UserInputHandler.cpp)