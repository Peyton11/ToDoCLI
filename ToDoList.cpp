/*
    ToDoList.cpp

    Implementation file for ToDoList class. Responsible for managing tasks. E.g. adding, removing, and updating.
*/

#include "ToDoList.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// Get tasks
std::vector<std::string> ToDoList::getTasks() const {
    return tasks;
}

// Set tasks
void ToDoList::setTasks(std::string& content) {

    // convert std::string to input file stream. Read line by line to append to vector
    std::istringstream iss (content);
    std::string line = "";

    while (std::getline(iss, line))
        tasks.push_back(line);
}

// Clear to-do list
void ToDoList::clear() {
    tasks.clear();
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