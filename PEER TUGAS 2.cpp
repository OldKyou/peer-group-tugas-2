#include <iostream>
using namespace std;

int main() {
    string tasks[10]; 
    int taskCount = 0;
    int choice;

    for (;;) { 
        cout << "\nList Tugas Simpel\n";
        cout << "1. Tambahkan Tugas\n";
        cout << "2. Tunjukkan Tugas\n";
        cout << "3. Keluar\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            if (taskCount < 10) {
                cout << "Tambahkan Tugas: ";
                cin.ignore();
                getline(cin, tasks[taskCount]);
                taskCount++;
            } else {
                cout << "List sudah penuh!\n";
            }
        } 
        else {
            if (choice == 2) {
                cout << "\nTugasmu:\n";
                if (taskCount == 0) {
                    cout << "(Belum ada tugas)\n";
                } else {
                    for (int i = 0; i < taskCount; i++) {
                        cout << i+1 << ". " << tasks[i] << endl;
                    }
                }
            } 
            else {
                if (choice == 3) {
                    cout << "Keluar dari program...\n";
                    break; // keluar loop
                } 
                else {
                    cout << "Pilihan aneh!\n";
                }
            }
        }
    }

    return 0;
}


