#include <iostream>
using namespace std;

int main() {
    int i = 1;

start:
    if (i <= 10) {
        cout << i << " ";
        i++;
        goto start;
    }

    return 0;
}