#include<iostream>
using namespace std;
void circumference(double r) {
    cout << 2 * 3.14 * r;
}
int main() {
    double r; cin >> r;
    circumference(r);
}