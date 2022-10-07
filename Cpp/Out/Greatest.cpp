#include <iostream>
using namespace std;
int main() {
    // compare a and b.
    int a, b; cin >> a >> b;
    if (a>b) {
        cout << "a is greater than b";
    }
    if (a<b) {
        cout << "b is greater than a";
    }
    else {
        cout << "a = b";
    }
}