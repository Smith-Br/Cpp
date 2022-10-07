#include <iostream>
using namespace std;
int main() {
    int score;
    cin >> score;
    if (0<=score && score<=10) {
        cout << "The score is valid";
    }
    else {
        cout << "The score is not valid";
    }
}