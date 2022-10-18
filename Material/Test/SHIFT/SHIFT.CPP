#include <iostream>
#include <fstream>

using namespace std;

void shift(int l, int r, int part[0]) {
    int save = part[r-1];
    for (int i = r-2; i > l-2; i--) {
        part[i+1] = part[i];
    }
    part[l-1] = save;
}

int main() {

    fstream inp("SHIFT.INP"); fstream out("SHIFT.OUT");
    int n, m, l, r, k; inp >> n; int part[n];
    for (int i = 0; i < n; i++) inp >> part[i];
    inp >> m; int i; int c = 0;

    for (int j = 0; j < m; j++) {
        inp >> i;
        if (i==1) {
            inp >> l >> r;
            shift(l, r, part);
        } else {
            inp >> l >> r >> k; c = 0;
            for (int i = l-1; i < r; i++) {
                if (part[i] == k) c++;
            }
            out << c << endl;
        }
    }
}