#include <iostream>
using namespace std;
int main() {
    // Range of a.
    int a; cin >> a;
    if (a>=10 && a<=100) {
        cout << a << " is in the range [10, 100]";
    }
    else {
        cout << a << " is not in the range [10, 100]";
    }
}