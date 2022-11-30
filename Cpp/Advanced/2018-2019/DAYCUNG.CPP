#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream inp("DAYCUNG.INP"); int n; inp >> n;
    int left[n+1], right[n+1];
    for (int i = 1; i <= n; i++) {
        inp >> left[i] >> right[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = left[i]+1; j < right[i]; j++) {
            if (left[i] < left[j] < right[i] < right[j] && j < i) {
                count++;
            }
        }
    }
    fstream out("DAYCUNG.OUT"); out << count;
    return 0;
}