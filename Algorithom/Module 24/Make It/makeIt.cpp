#include <bits/stdc++.h>
using namespace std;

bool makeit(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n <= 0)
    {
        return false;
    }
    return (n % 2 != 0 && makeit(n - 3)) || (n % 2 == 0 && makeit(n / 2));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (makeit(n) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}