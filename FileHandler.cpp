/*
    FileHandler.cpp

    Implementation file for FileHandler class. Responsible for reading from and writing to files.
*/

#include "FileHandler.hpp"
#include <iostream>
#include <fstream>

// Initialize file name
void FileHandler::setFileName(std::string name) {
    fileName = name;
}

// Write to file
void FileHandler::write(const ToDoList& toDoList) const {
    std::ofstream fout;
    fout.open(fileName);
    
    for (const auto& task: toDoList.getTasks()) {
        fout << task << '\n';
    }
}
