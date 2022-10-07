#include <iostream>
using namespace std;
int main() {
    string s; char c; cin >> s >> c; int place = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            place = i;
            break;
        }
    }
    if (place != -1) {
        cout << place;
    } else {
        cout << "-1";
    }
}