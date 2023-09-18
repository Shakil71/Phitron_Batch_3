#include <bits/stdc++.h>
using namespace std;
const long long N = 1005;
vector<pair<long long, long long>> graph[N];
vector<bool> visited(N, false);
vector<long long> dist(N, INT_MAX);
void dijkstra(long long s)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while (!pq.empty())
    {
        long long parentNode = pq.top().second;
        long long parentWeight = pq.top().first;
        pq.pop();
        if (visited[parentNode] == true)
        {
            continue;
        }
        visited[parentNode] = true;
        for (auto child : graph[parentNode])
        {
            long long childNode = child.second;
            long long childWeight = child.first;
            if (dist[childNode] > parentWeight + childWeight)
            {
                dist[childNode] = parentWeight + childWeight;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}
int main()
{
    long long nod, e;
    cin >> nod >> e;
    while (e--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({w, b});
    }
    long long s;
    cin >> s;
    long long tc;
    cin >> tc;

    dijkstra(s);
    while (tc--)
    {
        long long des, cost;
        cin >> des >> cost;
        if (cost >= dist[des])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}