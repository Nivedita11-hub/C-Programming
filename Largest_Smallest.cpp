#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 5;

    int largest, smallest;

    if (a > b && a > c)
        largest = a;
    else if (b > c)
        largest = b;
    else
        largest = c;

    if (a < b && a < c)
        smallest = a;
    else if (b < c)
        smallest = b;
    else
        smallest = c;

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;
    return 0;
}