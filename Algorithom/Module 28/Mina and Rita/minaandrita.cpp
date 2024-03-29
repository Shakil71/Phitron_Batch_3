#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int i = n, j = m;
        string result;
        while (i != 0 && j != 0)
        {
            if (a[i - 1] == b[j - 1])
            {
                result = result + a[i - 1];
                i--;
                j--;
            }
            else
            {
                if (dp[i - 1][j] > dp[i][j - 1])
                {
                    result = result + a[i - 1];
                    i--;
                }
                else
                {
                    result = result + b[j - 1];
                    j--;
                }
            }
        }

        while (i != 0)
        {
            result = result + a[i - 1];
            i--;
        }
        while (j != 0)
        {
            result = result + b[j - 1];
            j--;
        }

        cout << result.size() << endl;
    }
    return 0;
}