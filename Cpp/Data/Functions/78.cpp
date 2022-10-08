#include <iostream>
using namespace std;

void d() {
    for (int i = 3; i <= 100; i+=3) {
        if (i%3==0 && i%5!=0) {
            cout << i << ' ';
        }
    }
}

int main() {
    d();
    return 0;
}