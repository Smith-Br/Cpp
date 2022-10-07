#include <iostream>
using namespace std;
int main() {
    long long a, b; cin >> a >> b;
    while (a<=b) {
        if (a%3==0 && a%5==0) {
            cout << a << ' ';
        }
        a++;
    }
}