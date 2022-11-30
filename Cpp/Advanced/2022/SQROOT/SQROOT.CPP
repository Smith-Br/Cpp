#include <fstream>

using namespace std;

int main() {
    fstream inp("SQROOT.INP"); int n; inp >> n;
    fstream out("SQROOT.OUT"); out << (n*(n+1)*(2*n+1)/6)%2021;
    inp.close(); out.close();
    return 0;
}