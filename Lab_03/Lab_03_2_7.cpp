#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    int A[SIZE], B[SIZE];

    for (int i = 0; i < SIZE; i++) {
        A[i] = i;
        B[i] = SIZE + i;
    }

    for (int i = 0; i < SIZE; i++) {
        A[i] = A[i] + B[i];
        B[i] = A[i] - B[i];
        A[i] = A[i] - B[i];
    }

    cout << "Масив A: ";
    for (int i = 0; i < SIZE; i++) cout << A[i] << " ";
    cout << "\nМасив B: ";
    for (int i = 0; i < SIZE; i++) cout << B[i] << " ";
    cout << endl;

    return 0;
