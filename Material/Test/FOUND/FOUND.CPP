#include <iostream>
#include <fstream>

using namespace std;

int main() {

    fstream inp("FOUND.INP"); int n, m; inp >> n >> m;
    int found[n]; for (int i=0; i<n; i++) inp >> found[i];
    int x[m]; for (int i=0; i<m; i++) inp >> x[i];
    fstream out("FOUND.OUT"); int count;
    for (int i=0; i<m; i++) {
        count = 0;
        for (int j=0; j<n; j++) {
            if (x[i] == found[j]) {
                count++;
                break;
            }
        }
        if (count == 0) out << 0 << endl;
        else out << 1 << endl;
    }
    inp.close(); out.close();
    return 0;
}