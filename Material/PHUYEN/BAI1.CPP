#include <fstream>

using namespace std;

int check(int l, int r, int count, string expression) {
    int cl = 0; int cr = 0;
    if (l+1 == r) return count;
    else {
        for (int i=l; i<=r; i++) {
        if (expression[i] == '(') cl++;
        else if (expression[i] == ')') cr++;
        }
        if (cl > cr || cl < cr) return -1;
        else {
            count++;
            return check(l+1, r-1, count, expression);
        }
    }
}


int main() {
    fstream inp("BAI1.INP"); string expression; inp >> expression;
    inp.close(); fstream out("BAI1.OUT"); int l, r;
    for (int i=0; i<expression.length(); i++) {
        if (expression[i] == '(') {
            l = i;
            break;
        }
    }
    for (int i=expression.length()-1; i>=0; i--) {
        if (expression[i] == '(') {
            r = i;
            break;
        }
    }
    out << check(l, r, 0, expression);
    return 0;
}
