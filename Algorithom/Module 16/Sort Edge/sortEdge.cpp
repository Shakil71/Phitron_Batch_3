#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> edges;
bool sortEdge(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
int main()
{
    int e;
    cin >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }

    sort(edges.begin(), edges.end(), sortEdge);

    for (auto nod : edges)
    {
        cout << nod.first << " " << nod.second << endl;
    }
    return 0;
}
