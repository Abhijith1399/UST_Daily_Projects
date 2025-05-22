#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double bal) : accountHolder(name), balance(bal) {}

    // Friend function declaration
    friend void auditReport(const BankAccount& acc);
};

// Friend function definition
void auditReport(const BankAccount& acc) {
    cout << "[AUDIT REPORT]" << endl;
    cout << "Account Holder: " << acc.accountHolder << endl;
    cout << "Balance: $" << acc.balance << endl;
}

int main() {
    BankAccount acc("Alice", 2500.0);

    // Friend function accessing private members
    auditReport(acc);

    return 0;
}