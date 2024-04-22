/*
    ToDoList.hpp

    Interface file for ToDoList class. Responsible for managing tasks. E.g. adding, removing, and updating.
*/

#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <vector>
#include <string>

class ToDoList {
public:
    // Get tasks
    std::vector<std::string> getTasks() const;

    // Set tasks
    void setTasks(std::string& content);

    // Display all commands and how to use them
    void showHelp() const;

    // Display to-do list
    void display() const;

    // Clear to-do list
    void clear();

    // Add task to to-do list
    void addTask(const std::string& entry);

    // Delete task from to-do list
    void deleteTask(const std::string& taskNumber);

    // Modify task in to-do list
    void modifyTask(const std::string& taskNumber);

private:
    int items = 0;
    std::vector<std::string> tasks;
};

#endif
