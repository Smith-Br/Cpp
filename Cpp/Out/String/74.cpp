#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count{0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}