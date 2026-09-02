#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

    // Static member (common for all accounts)
    static double interestRate;

public:
    // Constructor
    BankAccount(string accName, double initialBalance) {
        name = accName;
        balance = initialBalance;
    }

    // Instance function - shows account details
    void showDetails() {
        cout << "Account Holder: " << name << ", Balance: $" << balance << endl;
    }

    // Static function - shows current interest rate (same for all)
    static void showInterestRate() {
        cout << "Current Interest Rate: " << interestRate << "%" << endl;
    }
};

// Definition of static member outside class
double BankAccount::interestRate = 7.5;

int main() {
    // Calling static function without object
    BankAccount::showInterestRate();

    // Creating two bank accounts
    BankAccount acc1("Alice", 1500.0);
    BankAccount acc2("Bob", 2300.0);

    // Calling instance function for individual accounts
    acc1.showDetails();
    acc2.showDetails();

    return 0;
}
