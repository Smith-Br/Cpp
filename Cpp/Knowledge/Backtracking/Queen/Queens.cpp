#include <iostream>
#include <memory.h>

using namespace std;

int n; bool col[13], diag1[25], diag2[24];
int count = 0;

void placeQueen(int i) {
    for (int j = 1; j <= n; j++) {
        if (col[j] == 1 && diag1[i + j] == 1 && diag2[i - j + n] == 1) {
            col[j] = diag1[i + j] = diag2[i - j + n] = 0;
            if (i == n) count++;
            else placeQueen(i+1);
            col[j] = diag1[i + j] = diag2[i - j + n] = 1;
        }
    }
}

int main() {
    cin >> n;

    memset(col, true, sizeof(col));
    memset(diag1, true, sizeof(diag1));
    memset(diag2, true, sizeof(diag2));

    placeQueen(1);
    if (count > 0) cout << count;
    else cout << -1;
    return 0;
}