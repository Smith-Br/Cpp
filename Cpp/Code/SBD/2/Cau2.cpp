#include <iostream>

using namespace std;

int main() {
    int n, k, a[n]; cout << "n: "; cin >> n; cout << "k: "; cin >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) if (a[i] % k == 0) cout << a[i] << ' ';
    return 0;
}