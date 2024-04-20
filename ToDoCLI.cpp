/*
    ToDoCLI.cpp

    Application file for a command line interface program, ToDoCLI. Add, delete, and modify a to-do list from the command line.
*/

#include "ToDoList.hpp"
#include "UserIOHandler.hpp"
#include "FileHandler.hpp"
#include <iostream>

int main() {

    // Instantiate objects for ToDoCLI application
    ToDoList toDoList;
    UserIOHandler userIOHandler;
    FileHandler fileHandler;

    fileHandler.setFileName("ToDoList.txt");

    // Add tasks to to-do list
    toDoList.addTask("Project v4handler");
    toDoList.addTask("Statistics HW");
    toDoList.addTask("Calculus HW");

    // Output to-do list
    userIOHandler.displayToDoList(toDoList);

    // Write to-do list to an external file for later use
    fileHandler.write(toDoList);

    return 0;
}
