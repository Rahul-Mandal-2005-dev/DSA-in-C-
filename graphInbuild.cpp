#include <iostream>
#include <list>
using namespace std;
class Graph
{
    int vertex;
    list<int> *l;

public:
    Graph(int val) : vertex(val), l(new list<int>[val]) {}

    void addRoad(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void AdjList()
    {
        for (int i = 0; i < vertex; i++)
        {
            cout<<i<<": ";
            for(int neigh : l[i])
            {
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g1(6);
    g1.addRoad(0, 1);
    g1.addRoad(1, 2);
    g1.addRoad(1, 3);
    g1.addRoad(1, 4);
    g1.addRoad(2, 3);
    g1.addRoad(2, 5);
    g1.addRoad(3, 4);
    g1.addRoad(4, 5);
    g1.AdjList();

    return 0;
}