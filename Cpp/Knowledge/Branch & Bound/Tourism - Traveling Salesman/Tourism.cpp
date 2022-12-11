#include <fstream>

using namespace std;

// Khai báo biến toàn cục.
int n, m, connection[100][100], solution[22], check[22], last[22];

// Hàm tính tổng cho nhanh :D.
int Sum(int a[]) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += connection[a[i]][a[i + 1]];
    return sum;
}

// Hàm tìm bestconfig().
void Min(int i) {
    for (int j = 2; j <= n; j++) {
        if (check[j] == 1) {
            check[j] = 0;
            solution[i] = j;
            if (i == n) {
                if (Sum(solution) < Sum(last)) {
                    for (int k = 2; k <= n; k++) last[k] = solution[k];
                }
            }
            else Min(i+1);
            check[j]=1;
        }
    }
}

int main() {

    fstream inp("Tourism.inp"), out("Tourism.out");
    inp >> n >> m;

    // Khởi tạo connection[][] khả dụng, với connection[][]=0 là vô cực.
    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= n + 1; j++) connection[i][j] = 100000;
    }
    
    // Nhập dữ liệu cho connection[][] - *lưu ý: 2 -> 4 và 4 -> 2 có cùng chi phí hay connection[2][4] = connection[4][2].
    for (int i = 1; i <= m; i++) {
        int a, b;
        inp >> a >> b >> connection[a][b];
        connection[b][a] = connection[a][b];
    }

    // Khởi tạo check[] với toàn bộ giá trị là 1.
    for (int i = 0; i <= n+1; i++) check[i] = 1;

    // Khởi tạo cấu hình đầu tiên cho solution[].
    for (int i = 1; i <= n; i++) last[i] = solution[i] = i;

    // n+1 luôn là 1.
    solution[n+1] = 1; 
    last[n+1] = 1;

    // Chọn 2 vì 1 là điểm xuất phát.
    Min(2);

    // In ra cấu hình tốt nhất.
    if (Sum(last) < 1000) {
        for (int i = 1; i <= n; i++) out << last[i] << " -> ";
        out << 1 << endl << Sum(last);
    } else out << -1;

    return 0;
}

//Nice! :D