#include <iostream>
using namespace std;

void s(string s, int i) {
    for (i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
    }
    cout << s << endl;
}

int main() {
    string s1, s2, s3; cin >> s1 >> s2 >> s3;
    s(s1, 0); s(s2, 0); s(s3, 0);
}