#include <iostream>
#include <memory.h>

using namespace std;

int n; bool row[12]; int count = 0;

void checkRook(int i) {
    for (int j = 1; j <= n; j++) {
        if (row[j] == 1) {
            row[j] = 0;
            if (i == n) count++;
            else checkRook(i+1);
            row[j] = 1;
        }
    }
}

int main() {
    cin >> n;
    memset(row, 1, sizeof(row));
    checkRook(1);
    if (count > 0) cout << count;
    else cout << -1;
    return 0;
}