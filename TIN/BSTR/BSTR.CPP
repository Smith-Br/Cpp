#include <fstream>
#include <memory.h>

using namespace std;

int main() {
    fstream INP("BSTR.INP"); int n; INP >> n;
    fstream OUT("BSTR.OUT");
    int decimal[n+1]; memset(decimal, 0, sizeof(decimal));
    
    while (decimal[0] < 1) {
        for (int i = 1; i <= n; i++) OUT << decimal[i];
        OUT << endl;
        for (int i = n; i >= 1; i--) {
            if (decimal[i]==0) {
                decimal[i]=1;
                break;
            } else {
                while (decimal[i]==1) {
                    decimal[i]=0;
                    i--;
                }
                decimal[i]=1;
                break;
            }
        }
    }
}