#include <iostream>

using namespace std;

enum MenuOptions { START = 1, SETTINGS, HELP, EXIT };

int main() {
    int choice;
    
    cout << "Menu:\n";
    cout << "1. Start\n";
    cout << "2. Settings\n";
    cout << "3. Help\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case START:
            cout << "Game Starting...\n";
            break;
        case SETTINGS:
            cout << "Opening Settings...\n";
            break;
        case HELP:
            cout << "Displaying Help Section...\n";
            break;
        case EXIT:
            cout << "Exiting Program...\n";
            break;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
    }

    return 0;
}
