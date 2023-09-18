#include <bits/stdc++.h>
using namespace std;
int row, col;
int c;
const int N = 1e3 + 5;
char grid[N][N];
bool visited[N][N];
vector<pair<int, int>> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool isValid(int a, int b)
{
    if (a >= 0 && a < row && b >= 0 && b < col && grid[a][b] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DFS(int p, int q)
{
    visited[p][q] = true;
    c++;
    for (auto dir : path)
    {
        int a = dir.first + p;
        int b = dir.second + q;
        if (isValid(a, b) == true && visited[a][b] != true)
        {
            DFS(a, b);
        }
    }
}
int main()
{
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    int mn = INT_MAX;
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (visited[i][j] != true && grid[i][j] != '-')
            {
                flag = 1;
                c = 0;
                DFS(i, j);
                mn = min(mn, c);
            }
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mn << endl;
    }

    return 0;
}