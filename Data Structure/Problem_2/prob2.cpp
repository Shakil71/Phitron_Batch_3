#include <bits/stdc++.h>
using namespace std;
void mergeSort(int arr[], int s)
{
    int l = 0;
    int r = s - 1;
    int m;
    int key;
    cin >> key;
    int flag = 0;
    while (l != r)
    {
        m = (l + r) / 2;
        if (arr[m] == key)
        {
            flag = 1;
            break;
        }
        else if (key < arr[m])
        {
            r = m - 1;
        }
        else if (key > arr[m])
        {
            l = m + 1;
        }
    }

    if (flag == 1)
    {
        cout << m << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
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
    mergeSort(arr, s);
    return 0;
}