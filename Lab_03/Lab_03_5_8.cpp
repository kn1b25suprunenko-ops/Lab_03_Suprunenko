#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть розмір матриці n: ";
    cin >> n;

    double matrix[n][n];

    cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    double element;
    cout << "Введіть елемент для підрахунку: ";
    cin >> element;

    int count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == element)
                count++;

    cout << "Кількість входжень елемента " << element << " = " << count << endl;

    return 0;
}
