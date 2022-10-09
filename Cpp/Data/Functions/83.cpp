#include <iostream>
using namespace std;

void array(int i, int n, int arr[1]) {
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void maxOfArray(int max, int n, int i, int arr[1]) {
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max << ' ';
}

int main() {
    int n1, n2, max1, max2; cin >> n1; int i{0};
    int arr1[n1];
    array(i, n1, arr1);
    cin >> n2;
    int arr2[n2];
    array(i, n2, arr2);
    maxOfArray(max1, n1, i, arr1);
    maxOfArray(max2, n2, i, arr2);
}