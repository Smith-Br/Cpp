#include <iostream>
using namespace std;

int main() {
    //odd or even.
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is an even number" << endl;
    }
    else {
        cout << n << " is an odd number" << endl;
    }
    return 0;
}