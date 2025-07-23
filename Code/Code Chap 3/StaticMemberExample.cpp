//Show total accounts created using static member variable


#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

    // Static variable to count number of accounts
    static int accountCount;

public:
    // Constructor
    BankAccount(string accName, double initialBalance) {
        name = accName;
        balance = initialBalance;
        accountCount++;  // Increment count every time an object is created
    }

    // Instance function to show account details
    void showDetails() {
        cout << "Account Holder: " << name << ", Balance: $" << balance << endl;
    }

    // Static function to get total accounts created
    static void showTotalAccounts() {
        cout << "Total Bank Accounts Created: " << accountCount << endl;
    }
};

// Initialize static member
int BankAccount::accountCount = 0;

int main() {
    // No account created yet
    BankAccount::showTotalAccounts();  // Output: 0

    // Create 2 accounts
    BankAccount acc1("Alice", 1000.0);
    BankAccount acc2("Bob", 2000.0);

    // Show details of each account
    acc1.showDetails();
    acc2.showDetails();

    // Show total number of accounts created
    BankAccount::showTotalAccounts();  // Output: 2

    // Create another account
    BankAccount acc3("Charlie", 3000.0);

    // Show updated total count
    BankAccount::showTotalAccounts();  // Output: 3

    return 0;
}
