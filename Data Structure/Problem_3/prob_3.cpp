#include <bits/stdc++.h>
using namespace std;
int doubleNumber(int arr[], int s, int n)
{
    int l = 0;
    int r = s - 1;

    int m;
    while (l != r)
    {
        m = (l + r) / 2;
        if (arr[m] == n)
        {
            return 1;
        }
        else if (n < arr[m])
        {
            r = m - 1;
        }
        else if (n > arr[m])
        {
            l = m + 1;
        }
    }
    return 0;
}
int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    int c = 0;
    int n;
    cin >> n;
    c = c + doubleNumber(arr, s, n);
    c = c + doubleNumber(arr, s, n);
    if (c > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}