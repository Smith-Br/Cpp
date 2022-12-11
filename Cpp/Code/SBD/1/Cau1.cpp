#include <iostream>
#include <math.h>

using namespace std;

double power(double x, double y) {
    if (y == 0) return 1;
    if (y == 1) return x;
    return x * power(x, y - 1);
}

int main() {
    int n; cout << "n: "; cin >> n;

    double sum = ((power(1+sqrt(5), n+3)-power(1-sqrt(5), n+3))/(power(2, n+3)*sqrt(5))) - 2;

    cout << int(sum);
}