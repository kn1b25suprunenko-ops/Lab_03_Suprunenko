#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        if (a[i] == mx)
            a[i] = mn;
        else if (a[i] == mn)
            a[i] = mx;
    }

    for (int x : a)
        cout << x << " ";

    return 0;
}
