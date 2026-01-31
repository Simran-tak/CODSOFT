#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> todo;
    int choice;

    while (true) {
        cout << "\n--- My To Do List ---\n";
        cout << "1. Add task\n";
        cout << "2. Show tasks\n";
        cout << "3. Delete task\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string task;
            cout << "Enter your task: ";
            getline(cin, task);
            todo.push_back(task);
            cout << "Task added\n";
        }
        else if (choice == 2) {
            if (todo.size() == 0) {
                cout << "No tasks yet\n";
            } else {
                cout << "\nYour tasks are:\n";
                for (int i = 0; i < todo.size(); i++) {
                    cout << i + 1 << ". " << todo[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            int num;
            cout << "Enter task number to delete: ";
            cin >> num;

            if (num > 0 && num <= todo.size()) {
                todo.erase(todo.begin() + num - 1);
                cout << "Task deleted\n";
            } else {
                cout << "Wrong number\n";
            }
        }
        else if (choice == 4) {
            cout << "Bye bye\n";
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
