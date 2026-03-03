#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    set<double> uniqueNumbers;

    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        uniqueNumbers.insert(x);
    }

    cout << "Кількість різних чисел: " << uniqueNumbers.size() << endl;

    return 0;
}
