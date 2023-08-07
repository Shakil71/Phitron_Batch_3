#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int right, int m)
{
    int lS = m - left + 1;
    int rS = right - m;
    int l[lS];
    int r[rS];
    for (int i = 0; i < lS; i++)
    {
        l[i] = arr[left + i];
    }

    for (int i = 0; i < rS; i++)
    {
        r[i] = arr[m + 1 + i];
    }
    int lhs = 0, rhs = 0, count = left;
    while (lhs < lS && rhs < rS)
    {
        if (l[lhs] >= r[rhs])
        {
            arr[count] = l[lhs];
            lhs++;
            count++;
        }
        else
        {
            arr[count] = r[rhs];
            rhs++;
            count++;
        }
    }
    while (lhs < lS)
    {
        arr[count] = l[lhs];
        lhs++;
        count++;
    }
    while (rhs < rS)
    {

        arr[count] = r[rhs];
        rhs++;
        count++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left == right)
    {
        return;
    }
    int m = (left + right) / 2;
    mergeSort(arr, left, m);
    mergeSort(arr, m + 1, right);
    merge(arr, left, right, m);
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
    int left = 0;
    int right = s - 1;
    mergeSort(arr, left, right);

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}