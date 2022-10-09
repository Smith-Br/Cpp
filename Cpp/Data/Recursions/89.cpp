#include <iostream>
using namespace std;

int sum(int n, int arr[1]) {
    if (n==1) return arr[0];
    return arr[n-1] + sum(n-1, arr);
}

int main() {
    int n; cin >> n; int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sum(n, arr);
    cout << sum(n, arr);
}