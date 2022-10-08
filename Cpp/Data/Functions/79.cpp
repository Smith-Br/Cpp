#include <iostream>
using namespace std;

void information(string name) {
    cout << "Hello " << name;
}

int main() {
    string name; cin >> name;
    information(name);
}