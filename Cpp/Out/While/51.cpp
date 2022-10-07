#include <iostream>
using namespace std;
int main() {
    int n; cin >> n; if (n%2!=0) n++;
    while (n<=100) {
        cout << n << " ";
        n+=2;
    }
}