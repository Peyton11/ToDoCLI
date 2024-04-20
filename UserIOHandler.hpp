/*
    UserIOHandler.hpp

    Interface file for UserIOHandler class. Responsible for interacting with the user. Deals with user input/output.
*/

#ifndef USERIOHANDLER_HPP
#define USERIOHANDLER_HPP

#include "ToDoList.hpp"

class UserIOHandler {
public:
    // List all tasks in to-do list
    void displayToDoList(const ToDoList& toDoList) const;
};

#endif
