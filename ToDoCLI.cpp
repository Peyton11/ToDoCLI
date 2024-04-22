/*
    ToDoCLI.cpp

    Application file for a command line interface program, ToDoCLI. Add, delete, and modify a to-do list from the command line.
*/

#include "ToDoList.hpp"
#include "UserIOHandler.hpp"
#include "FileHandler.hpp"
#include <iostream>

int main(int argc, char* argv[]) {

    // Instantiate objects for ToDoCLI application
    ToDoList toDoList;
    UserIOHandler userIOHandler;
    FileHandler fileHandler;

    // Where to write to file
    fileHandler.setFileName("ToDoList.txt");

    // Read in tasks from file and initialize to-do list
    std::string content = fileHandler.read();
    toDoList.setTasks(content);

    // Invalid format
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <command> [argument]\n";
        return 1;
    }

    // Too many arguments. There should be exactly three
    if (argc > 3) {
        std::cerr << "Too many arguments: " << argc << '\n';
        return 1;
    }

    // Second argument from the CLI. In the format: "todo <command> [argument]". User can list, add, delete, and modify tasks
    std::string command = argv[1];
    if (command == "list") {
        userIOHandler.displayToDoList(toDoList);

    } else if (command == "clear") {
        // Clear to-do list
        toDoList.clear();

    } else if (command == "add") {
        // Add argument to to-do list
        toDoList.addTask(argv[2]);

    } else if (command == "delete") {
        // Delete task from to-do list
        toDoList.deleteTask(argv[2]);

    } else if (command == "modify") {
        // Modify task in to-do list
    } else {
        std::cerr << "Invalid command: " << command << '\n';
        return 1;
    }

    // Write to-do list to an external file for later use
    fileHandler.write(toDoList);

    return 0;
}
