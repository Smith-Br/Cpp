#include <iostream>
using namespace std;
void str(int n, int i, string arr[1])
{
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i].size() >= 3)
        {
            cout << arr[i] << ' ';
        }
    }
}
int main()
{
    int n, i;
    cin >> n;
    string arr[n];
    str(n, i, arr);
}