#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        int n = a.size();
        int m = n;

        int mkp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    mkp[i][j] = 0;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    mkp[i][j] = mkp[i - 1][j - 1] + 1;
                }
                else
                {
                    mkp[i][j] = max(mkp[i - 1][j], mkp[i][j - 1]);
                }
            }
        }

        cout << a.size() - mkp[n][m] << endl;
    }
    return 0;
}
