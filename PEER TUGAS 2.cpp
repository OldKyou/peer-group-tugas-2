#include <iostream>
using namespace std;

int main() {
    string tasks[10]; // can only hold 10 tasks
    int taskCount = 0;
    int choice;

    for (;;) { // infinite loop using for
        cout << "\n--- SIMPLE TO-DO LIST ---\n";
        cout << "1. Add Task\n";
        cout << "2. Show Task\n";
        cout << "3. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            if (taskCount < 10) {
                cout << "Add Task: ";
                cin.ignore();
                getline(cin, tasks[taskCount]);
                taskCount++;
            } else {
                cout << "Task list is full!\n";
            }
        } 
        else {
            if (choice == 2) {
                cout << "\nYour Task:\n";
                if (taskCount == 0) {
                    cout << "(No Task Yet)\n";
                } else {
                    for (int i = 0; i < taskCount; i++) {
                        cout << i+1 << ". " << tasks[i] << endl;
                    }
                }
            } 
            else {
                if (choice == 3) {
                    cout << "Exiting program...\n";
                    break; // keluar loop
                } 
                else {
                    cout << "Invalid choice!\n";
                }
            }
        }
    }

    return 0;
}

