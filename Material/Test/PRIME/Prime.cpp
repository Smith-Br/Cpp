#include <random>
#include <fstream>

using namespace std;

int random(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int power(int a, int p) {
    if (p == 0) return a;
    else return a * power(a, p - 1);
}

bool isPrime(int a, int p) {
    if ((power(a, p - 1) - 1) % p == 0) return true;
    else return false;
}

int main() {
    fstream inp("PRIME.INP"); int N; inp >> N;
    int P[0]; for (int i=0; i<N; i++) inp >> P[i];
    int a = 2; int list = 0;

    for (int i=0; i<N; i++) {
        if (isPrime(a, P[i]) == true) list++;
    }

    fstream out("PRIME.OUT");
    if (list == 0) out << -1;
    else out << list;
}