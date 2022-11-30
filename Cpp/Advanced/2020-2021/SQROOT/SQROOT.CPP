#include <fstream>

using namespace std;

int main() {
    fstream INP("SQROOT.INP");
    int n; INP >> n;
    fstream OUT("SQROOT.OUT");
    OUT << (n*(n+1)*(2*n+1)/6)%2021;
    return 0;
}