Create a BankAccount class with a private balance, a constructor, deposit(), withdraw() (no overdraft), and display(). Test it with an objec

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string o, double b) : owner(o), balance(b) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << owner << "'s balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Amit", 1000);
    acc.display();
    acc.deposit(500);
    acc.withdraw(300);
    acc.withdraw(5000);
    acc.display();
    return 0;
}
