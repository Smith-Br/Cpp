#include <iostream>

using namespace std;

void analyze(string one, string two) {
    int place = 0;
    string aone[one.length()]; string atwo[two.length()];
    for (char i=65; i<=90; i++) {
        for (int j=0; j<one.length(); j++) {
            if (one[j] == i) {
                aone[place] = i;
                place++;
            }
        }
    } 
}


int main() {
    string one, two; cin >> one >> two;
    int count = 0;
}