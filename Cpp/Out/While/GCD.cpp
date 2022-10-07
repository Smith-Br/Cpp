#include <iostream>
using namespace std;
int main()
{
    // GCD with while loop.
    int n;
    int i = 2;
    int count = 2;
    cin >> n;
    while (i <= n / 2)
    {
        if (n % i == 0)
            count++;
        i++;
    }
    cout << count;
    return 0;
}