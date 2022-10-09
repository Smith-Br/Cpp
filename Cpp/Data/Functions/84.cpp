#include <iostream>
using namespace std;

void odd(int count, int n, int i, int arr[1]) {
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        if ((arr[i]-1) % 2 == 0) {
            count++;
        }
    }
    cout << count;
}

int main() {
    int n, i; int count{0}; cin >> n;
    int arr[n];
    odd(count, n, i, arr);
}