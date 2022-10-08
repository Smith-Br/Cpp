#include <iostream>
using namespace std;

void arrange(int n, int i, int j, int arr[1]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n; cin >> n;
    int i{0}, j{0}; int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    arrange(n, i, j, arr);
}