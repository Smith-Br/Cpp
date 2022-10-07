#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m; int arr[n][m]; int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cin >> arr[i][k];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            if (arr[i][k] % 5 == 0) {
                sum += arr[i][k];
            }
        }
    }
    cout << sum;
    return 0;
}