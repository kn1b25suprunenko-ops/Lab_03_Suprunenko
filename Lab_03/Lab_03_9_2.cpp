#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    // Пошук кандидата
    int candidate = 0, count = 0;

    for (int x : a) {
        if (count == 0) {
            candidate = x;
            count = 1;
        }
        else if (x == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Перевірка
    count = 0;
    for (int x : a)
        if (x == candidate)
            count++;

    if (count > n / 2)
        cout << candidate;
    else
        cout << -1;

    return 0;
}
