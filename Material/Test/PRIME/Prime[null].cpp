#include <fstream>

using namespace std;

int main() {
    fstream inp("PRIME.INP"); int n; inp >> n;
    int p[n]; for (int i=0; i<n; i++) inp >> p[i];

    for (int i = 0; i < n; i++) {
        if (p[i] % 2 == 0) {
            for (int k = i; k < n; k++) {
                p[k] = p[k + 1];
            }
        }
    }
}