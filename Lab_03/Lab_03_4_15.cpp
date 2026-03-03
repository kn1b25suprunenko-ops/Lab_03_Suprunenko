#include <iostream>
using namespace std;

int main() {
    const int ROWS = 4;
    const int COLS = 5;
    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            matrix[i][j] = i*COLS + j + 1;

    cout << "Початкова матриця:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    for (int j = 0; j < COLS; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[j][COLS-1];
        matrix[j][COLS-1] = temp;
    }

    cout << "\nПісля обміну:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
