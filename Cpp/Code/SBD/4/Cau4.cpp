#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b; cout << "a: "; cin >> a; cout << "b: "; cin >> b;
    for (int c = round(sqrt(a)); c <= round(sqrt(b)); c++) {
        if (c * c >= a && c * c <= b) {
            cout << c * c << ' ';
        }
    }
    return 0;
}