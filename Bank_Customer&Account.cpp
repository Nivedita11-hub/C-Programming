#include <iostream>
using namespace std;

class Customer {
public:
    string fname, lname;
};

class Account {
public:
    Customer c;
    double balance;
};

int main() {
    Customer cust = {"Nivi", "M"};

    Account a1 = {cust, 5000};
    Account a2 = {cust, 10000};

    cout << a1.c.fname << " Balance: " << a1.balance << endl;
    cout << a2.c.fname << " Balance: " << a2.balance;
    return 0;
}