#include <iostream>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    if (a <= b && b <= c) {
        cout << "increasing";
        return 0;
    }
    if (a >= b && b>= c) {
        cout << "decreasing";
        return 0;
    }
    else {
        cout << "neither increasing nor decreasing order";
        return 0;
    }
}