/*
    ToDoList.cpp

    Implementation file for ToDoList class.
*/

#include "ToDoList.hpp"
#include <iostream>
#include <vector>
#include <string>

void ToDoList::output() const {
    std::vector<std::string>::const_iterator begin = entries.begin();
    std::vector<std::string>::const_iterator end = entries.end();
    int index = 1;

    for (auto p = begin; p != end; ++p) {
        std::cout << '[' << index << "] " << *p << '\n';
    }
}

void ToDoList::addEntry(const std::string& entry) {
    entries.push_back(entry);
    ++items;
}
