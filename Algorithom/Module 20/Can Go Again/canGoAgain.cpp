#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const long long INF = 1e18 + 5;
class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

int main()
{
    int nod, e;
    cin >> nod >> e;
    vector<Edge> v;
    for (int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge e(a, b, w);
        v.push_back(e);
    }
    vector<long long> dist(N, INF);
    int s;
    cin >> s;
    dist[s] = 0;
    int tc;
    cin >> tc;

    while (tc--)
    {
        int des;
        cin >> des;

        for (int i = 1; i <= nod - 1; i++)
        {
            for (const Edge &e : v)
            {
                int a = e.a;
                int b = e.b;
                int w = e.w;
                if (dist[a] != INF && dist[b] > dist[a] + w)
                {
                    dist[b] = dist[a] + w;
                }
            }
        }
        bool flag = false;
        for (const Edge &e : v)
        {
            int a = e.a;
            int b = e.b;
            int w = e.w;
            if (dist[a] != INF && dist[b] > dist[a] + w)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dist[des] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[des] << endl;
        }
    }

    return 0;
}