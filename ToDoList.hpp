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

    // Add task to to-do list
    void addTask(const std::string& entry);

private:
    int items = 0;
    std::vector<std::string> tasks;
};

#endif
