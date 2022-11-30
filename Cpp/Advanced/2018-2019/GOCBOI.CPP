#include <fstream>
#include <iostream>
using namespace std;

unsigned long gocboi(unsigned long n) {
    unsigned long m = 1;
    while (n > 9) {
        m = m * (n % 10);
        n = n / 10;
    }
    return m * n;
}

int main() {
    fstream inp("GOCBOI.INP"); unsigned long n; inp >> n;
    int count = 0;
    fstream out("GOCBOI.OUT");
    while (n > 9) {
        n = gocboi(n);
        out << n << endl;
        count++;
    }
    out << count;
    return 0;
}