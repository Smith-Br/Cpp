#include <iostream>
using namespace std;
int main() {
    int n; cin >> n; int arr[n]; int sum{0};
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i]>0&&arr[i]%2!=0) {
            sum+=arr[i];
        }
    }
    cout << sum;
    return 0;
}