#include <bits/stdc++.h>
using namespace std;
void mergeArray(int l[], int r[], int s, int s1)
{
    int n = s + s1;
    int arr[n];
    int  j = 0 ,lhs = 0, rhs = 0;
    while (lhs < s && rhs < s1)
    {
        if (l[lhs] >= r[rhs])
        {
            arr[j] = l[lhs];
            lhs++;
            j++;
        }
        else
        {
            arr[j] = r[rhs];
            rhs++;
            j++;
        }
    }
    while (lhs < s)
    {
        arr[j] = l[lhs];
        lhs++;
        j++;
    }
    while (rhs < s1)
    {
        arr[j] = r[rhs];
        rhs++;
        j++;
    }
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}
int main()
{
    int s;
    cin >> s;
    int l[s];
    for (int i = 0; i < s; i++)
    {
        cin >> l[i];
    }
    int s1;
    cin >> s1;
    int r[s1];
    for (int i = 0; i < s1; i++)
    {
        cin >> r[i];
    }
    mergeArray(l, r, s, s1);
    return 0;
}