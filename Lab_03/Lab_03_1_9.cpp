#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> T(n), C(n);

    for (int i = 0; i < n; ++i)
        cin >> T[i];

    C[0] = T[0];
    for (int i = 1; i < n; ++i)
        C[i] = C[i-1] + T[i];

    int minIndex = 0;
    for (int i = 1; i < n; ++i)
        if (T[i] < T[minIndex])
            minIndex = i;

    for (int i = 0; i < n; ++i)
        cout << C[i] << " ";

    cout << "\n" << (minIndex + 1);

    return 0;
}