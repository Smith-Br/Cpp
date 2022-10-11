#include <iostream>
#include <fstream>

using namespace std;

void arrange(int n, int sort[0]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sort[i] > sort[j]) {
                int temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
}

int main() {

    fstream inp("SORT.INP");
    int n; inp>>n; int sort[n];
    for (int i=0; i<n; i++) inp>>sort[i];
    inp.close();

    int odd[n]; int normal[n]; int even[n];
    int od = 0; int nor = 0; int ev = 0;

    for (int i=0; i<n; i++) {
        if (sort[i]%2==0&&sort[i]%3==0) {
            even[ev] = sort[i];
            ev++;
        } else if (sort[i]%2!=0&&sort[i]%3==0) {
            odd[od] = sort[i];
            od++;
        } else {
            normal[nor] = sort[i];
            nor++;
        }
    }

    arrange(ev, even); arrange(od, odd); arrange(nor, normal);

    fstream out("SORT.OUT");
    for (int i=0; i<od; i++) out<<odd[i]<<" ";
    for (int i=0; i<nor; i++) out<<normal[i]<<" ";
    for (int i=0; i<ev; i++) out<<even[i]<<" ";
    out.close();

    return 0;
}