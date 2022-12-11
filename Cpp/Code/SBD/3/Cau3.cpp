#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b; cout << "a: "; cin >> a; cout << "b: "; cin >> b;
    int smax[a+b];
    for (int c = abs(a-b)+1; c <= a+b-1; c++) {
        double p = (a+b+c)/2;
        smax[c] = sqrt(p*(p-a)*(p-b)*(p-c));
    }
    int max = smax[abs(a-b)+1]; int num = 0;
    for (int i = abs(a-b)+1; i <= a+b-1; i++) {
        if (smax[i] > max) {
            max = smax[i];
            num = i;
        }
    }
    cout << num;
    return 0;
}