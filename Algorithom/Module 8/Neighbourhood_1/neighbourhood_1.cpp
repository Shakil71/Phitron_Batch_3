#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void BFS(int k)
{
    queue<int> q;
    q.push(k);
    visited[k];
    int s;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        for (int v : adj[val])
        {
            if (visited[v] != true)
            {
                q.push(v);
                visited[v] = true;
            }
        }
        s = q.size();
        break;
    }
    cout << s << endl;
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
    int k;
    cin >> k;
    BFS(k);
    return 0;
}
