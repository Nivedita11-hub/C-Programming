#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Capital Letter";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Small Letter";
    else
        cout << "Special Character";

    return 0;
}