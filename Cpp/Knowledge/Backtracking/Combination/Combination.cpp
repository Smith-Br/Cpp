#include <iostream>

using namespace std;

int n, k, ar[100];

void print() {
    for (int i = 1; i <= k; i++) cout << ar[i];
    cout << endl;
}

void combination(int i) {
    for (int j = ar[i-1]+1; j <= n-k+i; j++) {
        ar[i] = j;
        if (i == k) print();
        else combination(i+1);
    }
}

int main() {
    ar[0]=0;
    cin >> n >> k;
    combination(1);
    return 0;
}