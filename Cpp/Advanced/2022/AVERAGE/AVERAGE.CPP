#include <fstream>

using namespace std;

int average(int a[0], int u, int v) {
    int sum = 0;
    for (int i = u; i <= v; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    fstream inp("AVERAGE.INP"); int n, k; inp >> n >> k;
    int a[n]; for (int i = 0; i < n; i++) inp >> a[i];
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
}