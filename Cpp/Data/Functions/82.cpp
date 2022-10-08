#include <iostream>
using namespace std;

void sum(int n, int i, int s, int arr[1]) {
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    cout << s;
}

int main() {
    int n; cin >> n;
    int i{0}, s{0}; int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sum(n, i, s, arr);
}