/*
    UserIOHandler.cpp

    Implementation file for UserIOHandler class. Responsible for interacting with the user. Deals with user input/output.
*/

#include "UserIOHandler.hpp"
#include <iostream>
#include <vector>
#include <iterator>

// Display all tasks in to-do list
void UserIOHandler::displayToDoList(const ToDoList& toDoList) const {
    std::cout << "To-Do List:\n";
    int taskNumber = 1; 
    for (const auto& task : toDoList.getTasks()) {
        std::cout << '[' << taskNumber << "] " << task << '\n';
        ++taskNumber; 
    }
}
