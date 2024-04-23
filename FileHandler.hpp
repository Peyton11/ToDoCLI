/*
    FileHandler.hpp

    Interface file for FileHandler class. Responsible for reading from and writing to files.
*/

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include "ToDoList.hpp"
#include <string>

class FileHandler {
public:

    // Constructor initializes fileName
    FileHandler(std::string name);

    // Initialize fileName
    void setFileName(std::string name);

    // Read from file
    std::string read();

    // Write to file
    void write(const ToDoList& toDoList) const;

private:
    std::string fileName;
};

#endif
