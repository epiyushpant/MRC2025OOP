#include <iostream>
#include <string>

using namespace std; 

int main() {
    string correctPassword = "hello123";
    string input;
    
    for (int attempts = 1; attempts <= 5; attempts++) {
        cout << "Enter password: ";
        cin >> input;

        if (input.length() < 5) { // Skip short passwords
            cout << "Password too short, try again.\n";
            continue;
        }

        if (input == correctPassword) { // Stop once correct password is entered
            cout << "Access granted!\n";
            break;
        }

        cout << "Incorrect password, try again.\n";
    }
    return 0;
}
