#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int n = 7;
    vector<vector<double>> A(n, vector<double>(n));

    for (int j = 1; j <= n; ++j) {
        A[0][j-1] = 2*j + 3;
    }

    for (int j = 1; j <= n; ++j) {
        A[1][j-1] = j - 3.0/(2.0 + 1.0/j);
    }

    for (int i = 2; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = A[i-1][j] + A[i-2][j];
        }
    }

    cout << fixed << setprecision(3);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(10) << A[i][j];
        }
        cout << endl;
    }

    return 0;
}
