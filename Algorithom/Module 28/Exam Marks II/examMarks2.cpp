#include <bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int examMark = 1000 - m;
        if (examMark == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            memset(dp, false, sizeof(dp));
            dp[0][0] = true;
            for (int i = 1; i <= m; i++)
            {
                dp[0][i] = false;
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= examMark; j++)
                {
                    if (a[i - 1] <= j)
                    {
                        dp[i][j] = dp[i][j - a[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][examMark] == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}