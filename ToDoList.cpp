/*
    ToDoList.cpp

    Implementation file for ToDoList class. Responsible for managing tasks. E.g. adding, removing, and updating.
*/

#include "ToDoList.hpp"
#include <iostream>
#include <vector>
#include <string>

// Get tasks
std::vector<std::string> ToDoList::getTasks() const {
    return tasks;
}

// Add task to to-do list
void ToDoList::addTask(const std::string& entry) {
    tasks.push_back(entry);
    ++items;
}
