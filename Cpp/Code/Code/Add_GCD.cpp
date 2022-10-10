#include <iostream>
using namespace std;

int addGcd(int a, int m) {
    int count=1;

    if (m%a==0) return count;
    // Ta có nhận xét: a<m do nếu phản chứng tồn tại cặp gcd(a,m) với a>m thì tồn tại vô số x thỏa mãn gcd(a,m)=gcd(a+x,m) => đpcm.

    else {
        int temp_a=a; int gcd;

        for (int i=m; i>0; i--) {
            if (a%i==0&&m%i==0) {
                a/=i;
            }
        }
        // Thuật toán tối ưu do sau mỗi lần chia, (a,m) sẽ nhỏ hơn một phần đáng kể, giảm thiểu thời gian tính toán thay vì xét (i,j) cho (a,m).
        gcd=temp_a/a; int gcd_x;
        for (int x=1; x<m; x++) {
            a=temp_a+x;
            // Sau tính toán, (a,m) thay đổi nên ta gán lại giá trị cho (a,m).

            for (int i=m; i>0; i--) {
                if (a%i==0&&m%i==0) {
                    a/=i;
                }
            }
            gcd_x=(temp_a+x)/a;
            if (gcd_x==gcd) count++;
        }
        return count;
    }
}

int main() {
    int a, m;
    cin >> a >> m;
    addGcd(a,m);
    return 0;
}