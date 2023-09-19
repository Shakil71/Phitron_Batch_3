#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> parent(N, -1);
vector<int> parentSize(N, 1);
int cycleOfEdges(int source)
{
    while (parent[source] != -1)
    {
        source = parent[source];
    }
    return source;
}

void unionDsu(int a, int b)
{
    int cycleA = cycleOfEdges(a);
    int cycleB = cycleOfEdges(b);
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

int main()
{
    int nod, e;
    int count = 0;
    cin >> nod >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int cycleA = cycleOfEdges(a);
        int cycleB = cycleOfEdges(b);
        if (cycleA == cycleB)
        {
            count++;
        }
        else
        {
            unionDsu(a, b);
        }
    }
    cout << count << endl;

    return 0;
}