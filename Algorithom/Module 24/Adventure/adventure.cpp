#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];

int knapsack(int n, int bsize, int w[], int v[])
{
    if (n == 0 || bsize == 0)
    {
        return 0;
    }
    if (dp[n][bsize] != -1)
    {
        return dp[n][bsize];
    }
    if (w[n - 1] <= bsize)
    {
        int t = knapsack(n - 1, bsize - w[n - 1], w, v) + v[n - 1];
        int dt = knapsack(n - 1, bsize, w, v);
        return dp[n][bsize] = max(t, dt);
    }
    else
    {
        return dp[n][bsize] = knapsack(n - 1, bsize, w, v);
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int bsize;
        cin >> bsize;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= bsize; j++)
            {
                dp[i][j] = -1;
            }
        }
        int ans = knapsack(n, bsize, w, v);
        cout << ans << endl;
    }

    return 0;
}