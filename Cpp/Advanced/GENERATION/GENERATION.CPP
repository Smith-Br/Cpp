#include <fstream>

using namespace std;

int main() {
    fstream INP("GENERATION.INP"); int n, k; INP >> n >> k;
    fstream OUT("GENERATION.OUT");
    int a[n+1]; for (int i = 1; i <= n; i++) a[i] = i;
    int b[k+1]; for (int i = 1; i <= k; i++) b[i] = a[i];

    while (b[1] <= n-k+1) {
        while (b[k] < n) {
            for (int i = 1; i <= k; i++) OUT << b[i] << " ";
            OUT << endl;
            b[k]++;
        }
        b[k-1]++;
        b[k] = b[k-1]+1;
    }
    return 0;
}