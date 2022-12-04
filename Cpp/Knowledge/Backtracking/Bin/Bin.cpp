#include <iostream>

using namespace std;

int n, ar[100];

void print() {
    for (int i = 1; i <= n; i++) cout << ar[i];
    cout << endl;
}

void backtracking(int i) {
    for (int j = 0; j <= 1; j++) {
        ar[i] = j;
        if (i == n) print();
        else backtracking(i + 1);
    }
}

int main() {
    cin >> n;
    backtracking(1);
    return 0;
}