#include <iostream>
using namespace std;
int main() {
    string name1, name2;
    cin >> name1 >> name2;
    if (name1==name2) {
        cout << "two people have the same name";
    }
    else {
        cout << "two people don't have the same name";
    }
}