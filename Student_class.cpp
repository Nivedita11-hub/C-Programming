#include <iostream>
using namespace std;

class Student {
public:
    string fname, lname, major;
    int year;
};

int main() {
    Student s1 = {"Nivi", "M", "CSE", 1};
    Student s2 = {"Ravi", "K", "ECE", 2};

    cout << s1.fname << " " << s1.major << endl;
    cout << s2.fname << " " << s2.major;
    return 0;
}