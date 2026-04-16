#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int arr[5] = {2, 3, 4, 5, 6};
    int sum = 0, primeCount = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        if (isPrime(arr[i])) primeCount++;
    }

    float avg = sum / 5.0;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Prime Count: " << primeCount << endl;

    return 0;
}