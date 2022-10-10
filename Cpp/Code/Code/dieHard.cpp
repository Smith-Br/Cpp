#include <iostream>
using namespace std;

int main() {
    int time = 0; int h, a; cin >> h >> a;
    while (h > 0 && a > 0) {
        h+=3; a+=2;
        if (h > 5 && a > 10) {
            h-=5; a-=10; time+=2;
        } else if (h > 20) {
            h-=20; a+=5; time+=2;
        } else {
            time++;
            break;
        }
    }
    cout << time;
}