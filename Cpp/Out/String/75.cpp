#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '3') {
            s[i] += 50;
        }
    }
    cout << s;
    return 0;
}