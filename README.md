# ToDoCLI
The ToDoCLI program is a simple command-line interface application designed to help users magange their tasks efficiently. Users are able to add, delete, modify, and display their tasks all from the terminal.

## Features
**Add Tasks**: Quickly add new tasks to your todo list.
**Delete Tasks**: Delete tasks that are no longer needed.
**Modify Tasks**: Modify tasks that need changed.
**Display Tasks**: View all tasks in your todo list.
**Clear Tasks**: Clear your todo list.
**Save and Load**: Your todo list is automatically saved for future use.

## Installation
1. Clone the repository to your local machine:
```
git clone https://github.com/Peyton11/ToDoCLI.git
```
2. Navigate to the directory:
```cd ToDoCLI```

3. Make a build directory and navigate to it:
```mkdir build```
```cd build```

4. Generate the build files:
```cmake ..```

5. Build the program:
```make```

6. Run the program:
```./todo <command> [argument]```

### Commands
- help
- list
- clear
- add
- delete
- modify

When adding a task, be sure to use quotation marks. For example: `todo add "Calculus Homework"`\
When deleting or modifying a task, specify the task number. For example: `todo delete 1`\
To display or clear list: `todo clear` or `todo list`
