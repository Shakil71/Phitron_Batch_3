#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> parent(N, -1);
vector<int> parentSize(N, 1);
int buildingMake(int source)
{
    while (parent[source] != -1)
    {
        source = parent[source];
    }
    return source;
}

void unionDsu(int a, int b)
{
    int cycleA = buildingMake(a);
    int cycleB = buildingMake(b);
    if (cycleA != cycleB)
    {
        if (parentSize[cycleA] > parentSize[cycleB])
        {
            parent[cycleB] = cycleA;
            parentSize[cycleA] = parentSize[cycleA] + parentSize[cycleB];
        }
        else
        {
            parent[cycleA] = cycleB;
            parentSize[cycleB] += parentSize[cycleA];
        }
    }
}
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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int nod, e;
    cin >> nod >> e;
    vector<Edge> edges;
    vector<Edge> edgeList;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a, b, w));
    }
    sort(edges.begin(), edges.end(), cmp);
    for (auto nodes : edges)
    {
        int cycleA = buildingMake(nodes.a);
        int cycleB = buildingMake(nodes.b);
        if (cycleA == cycleB)
        {
            continue;
        }
        edgeList.push_back(nodes);
        unionDsu(nodes.a, nodes.b);
    }
    int mn = 0;
    for (auto edges : edgeList)
    {
        mn = mn + edges.w;
       
    }
    if (edgeList.size() == nod - 1)
    {

        cout << mn << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}