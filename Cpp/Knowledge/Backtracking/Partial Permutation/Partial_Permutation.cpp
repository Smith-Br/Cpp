#include <iostream>
#include <memory.h>

using namespace std;

int n, k, a[100]; bool b[100];

void print() {
    for (int i = 1; i <= k; i++) cout << b[i];
    cout << endl;
}

void permutation(int i) {
    for (int j = 1; j <= n; j++) {
        if (b[j]==1) {
            a[i]=j;
            b[j]=0;
        }
        if (n == k) print();
        else permutation(i+1);
    }
}

int main() {
    memset(b, 1, sizeof(b));
    cin >> n >> k;
    permutation(1);
    return 0;
}