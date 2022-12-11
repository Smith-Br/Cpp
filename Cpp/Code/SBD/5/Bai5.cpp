#include <iostream>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b;
    switch (b) {
        case 1: c = a; break;
        case 2: c = 31 + a; break;
        case 3: c = 59 + a; break;
        case 4: c = 90 + a; break;
        case 5: c = 120 + a; break;
        case 6: c = 151 + a; break;
        case 7: c = 181 + a; break;
        case 8: c = 212 + a; break;
        case 9: c = 243 + a; break;
        case 10: c = 273 + a; break;
        case 11: c = 304 + a; break;
        case 12: c = 334 + a; break;
    }
    c = c % 7;
    switch (c) {
        case 2: cout << "Chủ nhật"; break;
        case 3: cout << "Thứ 2"; break;
        case 4: cout << "Thứ 3"; break;
        case 5: cout << "Thứ 4"; break;
        case 6: cout << "Thứ 5"; break;
        case 0: cout << "Thứ 6"; break;
        case 1: cout << "Thứ 7"; break;
    }
    return 0;
}