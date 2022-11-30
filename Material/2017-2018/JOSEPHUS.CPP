#include <fstream>
#include <memory.h>

using namespace std;

int main() {
    fstream inp("JOSEPHUS.INP"); int n, m; inp >> n >> m;
    fstream out("JOSEPHUS.OUT");
    
    bool josephus[n+1]; memset(josephus, true, sizeof(josephus));
    int count = 0; int r = 0;
    while (count < n) {
        for (int i = 1; i <= n; i++) {
            if (josephus[i]==true) {
                r++;
                if (r == m) {
                    count++;
                    josephus[i] = false;
                    r = 0;
                    out << i << ' ';
                }
            }
        }
    }
}


