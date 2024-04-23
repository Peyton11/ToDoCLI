/*
    FileHandler.cpp

    Implementation file for FileHandler class. Responsible for reading from and writing to files.
*/

#include "FileHandler.hpp"
#include <iostream>
#include <fstream>

// Constructor initializes fileName
FileHandler::FileHandler(std::string name)
    : fileName(name) {}

// Initialize fileName
void FileHandler::setFileName(std::string name) {
    fileName = name;
}

// Read from file
std::string FileHandler::read() {

    // Read file content into content string
    std::string content;
    std::string line;
    std::ifstream fin;
    fin.open(fileName);
    while (std::getline(fin, line)) {
        content += line += '\n';
    }

    // Return file content
    return content;
}

// Write to file
void FileHandler::write(const ToDoList& toDoList) const {

    std::ofstream fout;
    fout.open(fileName);
    for (const auto& task: toDoList.getTasks()) {
        fout << task << '\n';
    }
}
