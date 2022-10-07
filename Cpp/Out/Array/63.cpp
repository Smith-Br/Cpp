#include <iostream>
using namespace std;
int main() {
    int n, k; cin >> n;
    int arr[n]; unsigned int count = 0; //Because numbers of element can't be negative.
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        }
    }
    cout << count;
    return 0;
}