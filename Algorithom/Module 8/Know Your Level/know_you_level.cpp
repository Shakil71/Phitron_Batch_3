#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void BFS(int n)
{
    queue<int> q;
    q.push(n);
    visited[n] = true;
    level[n] = 0;

    while (!q.empty())
    {
        int val = q.front();
        q.pop();

        for (int v : adj[val])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[val] + 1;
            }
        }
    }
}

int main()
{
    int nod, e;
    cin >> nod >> e;

    for (int i = 0; i < e; i++)
    {
        int n, n1;
        cin >> n >> n1;
        adj[n].push_back(n1);
        adj[n1].push_back(n);
    }

    BFS(0);

    int l;
    cin >> l;

    vector<int> v;
    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        if (l == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        else if (level[i] == l)
        {
            flag = true;
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    if (flag == false)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int e : v)
        {
            cout << e << " ";
        }
    }

    return 0;
}