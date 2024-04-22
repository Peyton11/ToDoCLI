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

// Delete task from to-do list
void ToDoList::deleteTask(const std::string& taskNumber) {
    // Iterator that points to the task that will be deleted
    auto position = tasks.begin() + std::stoi(taskNumber) - 1;
    tasks.erase(position);
}