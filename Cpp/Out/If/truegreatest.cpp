#include <iostream>
using namespace std;
int main() {
    // compare a b, and c.
    int a, b, c; cin >> a >> b >> c;
    if (a>=b && a>=c) {
        cout << a;
        return 0;
    }
    if (b>=a && b>=c) {
        cout << b;
        return 0;
    }
    if (c>=a && c>=b) {
        cout << c;
        return 0;
    }
}