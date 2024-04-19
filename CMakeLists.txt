# @file CMakeLists.txt
#
# CMakefiles files for ToDoCLI project

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.28)

# project info
project(ToDoCLI)

set(CMAKE_CXX_STANDARD 20)

# Add executable and specify source files
add_executable(ToDoCLI main.cpp ToDoList.cpp FileHandler.cpp UserInputHandler.cpp)

# Custom target to run the program
add_custom_target(run
    COMMAND ./ToDoCLI
    DEPENDS ToDoCLI
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
