#include <iostream>
using namespace std;
int main()
{
    int n, i; cin >> n; int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int j = arr[0];
    for (i=0; i < n; i++) {
        if (arr[i] > j) {
            j = arr[i];
        }
    }
    cout << j;
    return 0;
}