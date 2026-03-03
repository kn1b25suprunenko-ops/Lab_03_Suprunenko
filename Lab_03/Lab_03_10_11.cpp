#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> cost(n, vector<int>(m));
    vector<vector<int>> sold(n, vector<int>(m));

    // зчитуємо вартість
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> cost[i][j];

    // зчитуємо продажі
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> sold[i][j];

    long long profit = 0;  // може бути великим

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (sold[i][j] == 1)
                profit += cost[i][j];

    cout << profit;

    return 0;
}
