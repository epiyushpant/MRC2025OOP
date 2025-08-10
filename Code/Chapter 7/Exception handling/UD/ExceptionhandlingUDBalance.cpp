#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientBalanceException : public exception {
public:
    const char* what() const noexcept override {
        return "Transaction failed: Insufficient balance!";
    }
};

void withdraw(double balance, double amount) {
    if (amount > balance)
        throw InsufficientBalanceException();
    cout << "Withdrawn: $" << amount << ", Remaining: $" << balance - amount << endl;
}

int main() {
    try {
        withdraw(500.0, 600.0);
    } catch (const InsufficientBalanceException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
