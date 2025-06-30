#include <iostream>
#include <string>
using namespace std;

string tasks[100]; // max 100 tasks
int taskCount = 0;

void addTask() {
    cout << "Enter your task: ";
    cin.ignore(); // clear input buffer
    getline(cin, tasks[taskCount]);
    taskCount++;
    cout << "Task added.\n";
}

void viewTasks() {
    if(taskCount == 0) {
        cout << "No tasks yet.\n";
    } else {
        cout << "Your Tasks:\n";
        for(int i=0; i<taskCount; i++) {
            cout << i+1 << ". " << tasks[i] << endl;
        }
    }
}

int main() {
    int choice;

    while(true) {
        cout << "\n--- TO-DO LIST ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            addTask();
        }
        else if(choice == 2) {
            viewTasks();
        }
        else if(choice == 3) {
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
