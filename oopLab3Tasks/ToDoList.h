#pragma once
#include <iostream>
#include <vector>
#include <string>

#include"Task.h"
using namespace std;
class ToDoList
{
private:
    vector<Task*> tasks;

public:
    // Method to add a task
    void addTask(const string& desc) {
        tasks.push_back(new Task(desc));
        cout << "Task added: " << desc << endl;
    }

    // Method to list all tasks
    void listTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        }
        else {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                cout << (tasks[i]->completed ? "[X] " : "[ ] ");
                cout << tasks[i]->description << endl;
            }
        }
    }

    // Method to mark a task as completed
    void markTaskCompleted(size_t index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index]->completed = true;
            cout << "Task " << index + 1 << " marked as completed." << endl;
        }
        else {
            cout << "Invalid task index." << endl;
        }
    }

    // Destructor to free allocated memory
    ~ToDoList() {
        for (auto& task : tasks) {
            delete task;
        }
    }

};

