#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool visited[N][N];
int dist[N][N];

vector<pair<int, int>> path = {{1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}};

bool isValid(int a, int b, int row, int col)
{
    return a >= 0 && a < row && b >= 0 && b < col;
}

void BFS(int p, int qu, int row, int col)
{
    queue<pair<int, int>> q;
    q.push({p, qu});
    visited[p][qu] = true;
    dist[p][qu] = 0;

    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();

        for (auto dir : path)
        {
            int a = dir.first + pi;
            int b = dir.second + pj;

            if (isValid(a, b, row, col) && !visited[a][b])
            {
                q.push({a, b});
                visited[a][b] = true;
                dist[a][b] = dist[pi][pj] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int row, col;
        cin >> row >> col;

        int ki, kj;
        cin >> ki >> kj;

        int n, m;
        cin >> n >> m;

        memset(visited, false, sizeof(visited));
        memset(dist, 0, sizeof(dist));
        BFS(ki, kj, row, col);

        if (!visited[n][m])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[n][m] << endl;
        }
    }

    return 0;
}