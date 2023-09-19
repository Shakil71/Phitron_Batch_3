#include <bits/stdc++.h>
using namespace std;

const int N = 100;
const long long INF = 1e18 + 5;

int main()
{
    int nod, e;
    cin >> nod >> e;

    long long dist[N][N];

    for (int i = 1; i <= nod; i++)
    {
        for (int j = 1; j <= nod; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        if (dist[a][b] == INF || dist[a][b] > w)
        {
            dist[a][b] = w;
        }
    }

    for (int k = 1; k <= nod; k++)
    {
        for (int i = 1; i <= nod; i++)
        {
            for (int j = 1; j <= nod; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF &&
                    dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        int s, des;
        cin >> s >> des;

        if (dist[s][des] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[s][des] << endl;
        }
    }

    return 0;
}