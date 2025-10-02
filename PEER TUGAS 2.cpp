#include <iostream>
using namespace std;

int main() {
    string tasks[10]; // can only hold 10 tasks
    int taskCount = 0;
    int choice;

    do {
        cout << "\n--- SIMPLE TO-DO LIST ---\n";
        cout << "1. Tambah tugas\n";
        cout << "2. Tunjukkan tugas\n";
        cout << "3. Keluar\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            if (taskCount < 10) {
                cout << "Tambah tugas: ";
                cin.ignore(); 
                getline(cin, tasks[taskCount]);
                taskCount++;
            } else {
                cout << "List tugas sudah penuh!\n";
            }
        } 
        else if (choice == 2) {
            cout << "\nTugasmu:\n";
            if (taskCount == 0) {
                cout << "(Belum ada tugas)\n";
            }
            for (int i = 0; i < taskCount; i++) {
                cout << i+1 << ". " << tasks[i] << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
