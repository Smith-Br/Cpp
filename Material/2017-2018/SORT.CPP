#include <fstream>
#include <memory.h>

using namespace std;

int main() {
    fstream inp("SORT.INP"); int n; inp >> n;
    string a[n]; int freq[3]; memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++) inp >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] == "X") freq[0]++;
        else if (a[i] == "H") freq[1]++;
        else freq[2]++;
    }
    fstream out("SORT.OUT");
    for (int i = 0; i < freq[0]; i++) out << 'X' << ' ';
    for (int i = 0; i < freq[1]; i++) out << 'H' << ' ';
    for (int i = 0; i < freq[2]; i++) out << 'T' << ' ';
    return 0;
}