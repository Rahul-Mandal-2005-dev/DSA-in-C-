#include <iostream>
using namespace std;
#define MAX 10
class Graph
{
    int vertex;
    int adjMatrix[MAX][MAX];

public:
    Graph(int val)
    {
        vertex = val;
        for (int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addRoad(int u, int v)
    {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
    void printing()
    {   cout<<"   ";
        for (int k = 0; k < vertex; k++)
        {
            cout << k << " ";
        }
        cout<<endl;
        for (int i = 0; i < vertex; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < vertex; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(5);
    g.addRoad(0, 1);
    g.addRoad(1, 2);
    g.addRoad(2, 3);
    g.addRoad(3, 4);
    g.addRoad(4, 1);
    g.printing();

    return 0;
}