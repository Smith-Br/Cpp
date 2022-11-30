#include <fstream>
#include <memory.h>

using namespace std;

int main() {
	fstream inp("SUMX.INP"); int n, k; inp >> n >> k;
	int A[n]; for (int i = 0; i < n; i++) inp >> A[i];
	int count[100000]; int sum = 0;
	for (int i = 0; i < n; i++) count[i] = 0;

    for (int i = 0; i < n; i++) if (A[i] < k) {
		count[A[i]]++;
		}

    for (int i = 1; i < k/2; i++) if (count[i]!=0 && count[k-i]!=0) {
		sum += count[i] * count[k-i];
		}

    fstream out("SUMX.OUT"); out << sum;
	return 0;
}