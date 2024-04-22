/*
    ToDoList.cpp

    Implementation file for ToDoList class. Responsible for managing tasks. E.g. adding, removing, modifying, etc.
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

    // Display all commands and how to use them
    void ToDoList::showHelp() const {
        std::cout << "Usage: todo <command> [argument]\n";
        std::cout << "commands:\n";
        std::cout << "\tlist: display to-do list\n";
        std::cout << "\tclear: clear entire to-do list\n";
        std::cout << "\tadd: add task to to-do list\n";
        std::cout << "\tdelete: remove task from to-do list\n";
        std::cout << "\tmodify: modify task in to-do list\n";
    }

// Display all tasks in to-do list
void ToDoList::display() const {

    std::cout << "To-Do List:\n";
    int taskNumber = 1;
    for (const auto& task : tasks) {
        std::cout << '[' << taskNumber << "] " << task << '\n';
        ++taskNumber;
    }
}

// Clear to-do list
void ToDoList::clear() {
    tasks.clear();
}

// Add task to to-do list
void ToDoList::addTask(const std::string& entry) {
    tasks.push_back(entry);
}

// Delete task from to-do list
void ToDoList::deleteTask(const std::string& taskNumber) {
    // Iterator that points to the task that will be deleted
    auto position = tasks.begin() + std::stoi(taskNumber) - 1;
    tasks.erase(position);
}

// Modify task in to-do list
void ToDoList::modifyTask(const std::string& taskNumber) {

    // User inputs updated task
    std::string updatedTask = "";
    std::cout << "Updated task: ";
    std::getline(std::cin, updatedTask);

    // Replace old task with new task
    auto index = std::stoi(taskNumber) - 1;
    tasks.at(index) = updatedTask;
}
