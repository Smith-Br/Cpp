#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 97) {
            s[i] += 32;
        }
    }
    cout << s;
    return 0;
}