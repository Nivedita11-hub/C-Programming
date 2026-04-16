#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;

public:
    void createAccount(string n, double b) {
        name = n;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance\n";
        }
    }

    void display() {
        cout << "Name: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.createAccount("John", 1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.display();
}