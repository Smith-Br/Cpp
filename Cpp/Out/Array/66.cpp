#include <iostream>
using namespace std;
int main() {
    int n; cin >> n; int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int k = i+1; k < n; k++) {
            if (arr[i] > arr[k]) {
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
                }
            }
        }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}