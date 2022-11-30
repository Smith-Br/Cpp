#include <iostream>
#include <iomanip>

using namespace std;

float power(float x, float n) {
    if (n == 0) return x;
    return x * power(x, n-1);
}

float factor(float n) {
    if (n == 1) return 1;
    return n * factor(n - 1);
}

int main() {
    float n, x; cin >> n >> x; float sum;
    sum = ((power(x, n) + factor(n) * x) / (2 * factor(n-1)));
    cout << setprecision(3) << sum;
    return 0;
}