#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    const double PI = 3.14;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;

    // Type Conversion
    int x = (int)b;
    cout << "Converted float to int: " << x << endl;

    return 0;
}