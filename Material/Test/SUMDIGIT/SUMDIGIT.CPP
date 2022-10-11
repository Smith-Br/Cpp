#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream inp("SUMDIGIT.INP"); fstream out("SUMDIGIT.OUT");
    int n; inp>>n; inp.close(); int sum=0;
    while (n>9) {
        sum=sum+n%10;
        n=n/10;
    }
    out<<sum+n; out.close();
    return 0;
}