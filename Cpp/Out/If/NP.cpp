#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    if (n > 0) {
        cout << "n is a positive number";
    } else if (n < 0) {
        cout << "n is a negative number";
    } else {
        cout << "n is equal to 0";
    }
}