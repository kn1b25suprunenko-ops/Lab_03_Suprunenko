#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cout << "Введіть кількість маршрутів N і кількість зупинок M: ";
    cin >> N >> M;

    vector<vector<int>> schedule(N, vector<int>(M));

    cout << "Введіть таблицю розкладу (N рядків по M чисел, 0 якщо не зупиняється):\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> schedule[i][j];

    vector<int> stopCount(M, 0);

    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (schedule[i][j] != 0)
                stopCount[j]++;
        }
    }

    int maxBuses = 0;
    for (int j = 0; j < M; j++)
        if (stopCount[j] > maxBuses)
            maxBuses = stopCount[j];

    cout << "Зупинки з найбільшою кількістю автобусів (" << maxBuses << " автобусів): ";
    for (int j = 0; j < M; j++)
        if (stopCount[j] == maxBuses)
            cout << j+1 << " ";

    cout << endl;
    return 0;
}
