#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream inp("DEMTU.INP"); string str;
    while (!inp.eof()) {
        getline(inp, str);
    }
    int word = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') word++;
    }
    fstream out("DEMTU.OUT"); out << word;
    return 0;
}