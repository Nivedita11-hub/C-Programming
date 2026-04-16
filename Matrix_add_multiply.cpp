#include <iostream>
using namespace std;

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2], mul[2][2] = {0};

    // Addition
    cout << "Matrix Addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    // Multiplication
    cout << "\nMatrix Multiplication:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                mul[i][j] += A[i][k] * B[k][j];
            }
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}