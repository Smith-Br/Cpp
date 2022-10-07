#include <iostream>
using namespace std;
int main() {
    string s; char c; cin >> s >> c; int count{0};
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count += 1;
        }
    }
    cout << count;
    return 0;
}