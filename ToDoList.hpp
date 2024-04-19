/*
    ToDoList.hpp

    Interface file for ToDoList class.
*/

#include <vector>
#include <string>

class ToDoList {
public:

    // List all entries in to-do list
    void output() const;

    // Add entry to to-do list
    void addEntry(const std::string& entry);

private:
    int items = 0;
    std::vector<std::string> entries;
};