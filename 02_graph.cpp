#include <iostream>
using namespace std;
#define MAX 10
class Graph
{
    int vertex;
    int adjMatrix[MAX][MAX];
    int adjList[MAX][MAX];
    int listsize[MAX];

public:
    Graph(int val)
    {
        vertex = val;
        for (int i = 0; i < vertex; i++)
        {
            listsize[i] = 0;
            for (int k = 0; k < vertex; k++)
                adjMatrix[i][k] = 0;
        }
    }
    void connect(int u, int v)
    {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;

        adjList[u][listsize[u]++] = v;
        adjList[v][listsize[v]++] = u;
    }
    void adjMatrixPrint()
    {
        cout << "   ";
        for (int i = 0; i < vertex; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < vertex; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < vertex; j++)
            {
                cout << adjMatrix[i][j]<<" ";
            }
            cout << endl;
        }
    }
    void adjListprint()
    {
     for (int i = 0; i < vertex; i++)
     {  cout<<i<<"--->";
        for (int j = 0; j < listsize[i]; j++)
        {
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
     }
        
    } 
};
int main()
{
    Graph g(5);
    g.connect(0,1);
    g.connect(1,2);
    g.connect(1,3);
    g.connect(2,4);
    g.connect(2,0);
    g.adjMatrixPrint();
    g.adjListprint();
    return 0;
}