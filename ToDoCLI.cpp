/*
    ToDoCLI.cpp

    Application file for a command line interface program, ToDoCLI. Add, delete, and modify a to-do list from the command line.
*/

#include "ToDoList.hpp"
#include "FileHandler.hpp"
#include <iostream>

int main(int argc, char* argv[]) {

    // Instantiate objects for ToDoCLI application
    ToDoList toDoList;
    FileHandler fileHandler("ToDoList.txt");

    // Read in tasks from file and initialize to-do list
    auto content = fileHandler.read();
    toDoList.setTasks(content);

    // Invalid format. No arguments given
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <command> [argument]\n";
        return 1;
    }

    // Too many arguments
    if (argc > 3) {
        std::cerr << "Too many arguments: " << argc << '\n';
        return 1;
    }

    // Second argument from the CLI. In the format: "todo <command> [argument]"
    auto command = argv[1];
    if (command == "help") {
        // Show user all commands and how to use them
        toDoList.showHelp();

    } else if (command == "list") {
        // Display to-do list
        toDoList.display();

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
        toDoList.modifyTask(argv[2]);

    } else {
        std::cerr << "Invalid command: " << command << '\n';
        return 1;
    }

    // Write list to an external file for later use
    fileHandler.write(toDoList);

    return 0;
}
