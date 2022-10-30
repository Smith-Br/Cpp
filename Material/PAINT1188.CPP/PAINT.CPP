#include <iostream>
#include <fstream>

using namespace std;
int main() {
    fstream inp("PAINT.INP"); int a, b, c, d, re;
    inp >> a >> b >> c >> d;
    if (a>=c) {
        if (d>=b) re = d - c;
        else re = b - c;
    } else {
        if (d>=b) re = d - a;
        else re = b - a;
    }
    fstream out("PAINT.OUT"); out << re;
    inp.close(); out.close();
    return 0;
}