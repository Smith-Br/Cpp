#include <iostream>
using namespace std;

int partition(int A[], int a, int b) {
    int pivot = A[b];
    int left = a; int right = b-1;
    while(true){
        while(left <= right && (A[left] % 5 < pivot % 5) || (A[left] % 5 == pivot % 5 && A[left] < pivot)) left++;
        while(left <= right && ((A[right] % 5) > (pivot % 5)) || (A[right] % 5 == pivot % 5 && A[right] > pivot)) right--;
        if (left >= right) break;
        swap(A[left], A[right]);
        left++;
        right--;
    }
    swap(A[left], A[b]);
    return left;
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void quickSort(int A[], int a, int b) {
    if (a < b) {
        int index = partition(A, a, b);
        quickSort(A, a, index - 1);
        quickSort(A, index + 1, b);
    }
}

int main() {
    int n, m; cout << "n: "; cin >> n; cout << "m: "; cin >> m;
    int A[n]; for (int i = 0; i < n; i++) cin >> A[i];
    quickSort(A, 0, n - 1);
    for (int i = 0; i < n; i++) if (A[i] == A[m]) m = i;
    cout << m+1;

    return 0;
}