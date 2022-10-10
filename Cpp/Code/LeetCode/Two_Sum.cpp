#include <iostream>
using namespace std;

int main() {
    int n; int nums[n];
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target; cin >> target;
    for (int i = 0; i < n; i++) {
        for (int k = 1; k > i && k < n; k++) {
            if (nums[i] + nums[k] == target) {
                cout << '[' << i << ',' << k << ']';
            }
        }
    }
}