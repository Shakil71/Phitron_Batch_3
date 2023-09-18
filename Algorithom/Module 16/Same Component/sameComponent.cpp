#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int row, col;
char grid[N][N];
bool visited[N][N];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
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
    int p, q;
    cin >> p >> q;
    int di, dj;
    cin >> di >> dj;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (p == i && q == j && grid[i][j] == '.')
            {
                DFS(p, q);
            }
        }
    }
    if (visited[di][dj] == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}