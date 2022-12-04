#include <iostream>
#include <memory.h>

using namespace std;

int n, k, a[100]; bool check[100];

void print() {
    for (int i = 1; i <= k; i++) cout << a[i];
    cout << endl;
}

void permutation(int i) {
    for (int j = 1; j <= n; j++) {
        if (check[j]==1) {
            a[i] = j;
            check[j] = 0;
            if (i == k) print();
            else permutation(i+1);
            check[j] = 1;
        }
    }
}

int main() {
    cin >> n >> k;
    memset(check, 1, sizeof(check));
    permutation(1);
    return 0;
}