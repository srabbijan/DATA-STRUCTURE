#include<bits/stdc++.h>
using namespace std;
#define V 5
#define Max  99
int minkey(int vertex[V],bool visit[V])
{
    int minvalue=Max,minindex;
    for(int i=0; i<V; i++)
    {
        if(visit[i]==false&&vertex[i]<minvalue)
        {
            minvalue=vertex[i];
            minindex=i;
        }
    }
    return minindex;
}
void print(int parent[V],int graph[V][V])
{
    for(int i=1;i<V;i++)
    {
        cout<<parent[i]<<"--"<<i<<":"<<graph[i][parent[i]]<<"\n";
    }
}
int primMST(int graph[V][V])
{
    int parent[V];
    int vertex[V];
    bool visit[V];
    for(int i=0; i<V; i++)
    {
        vertex[i]=Max;
        visit[i]=false;
    }
    parent[0]=0;
    vertex[0]=0;
    for(int i=0; i<V-1; i++)
    {
        int u = minkey(vertex,visit);
        visit[u]=true;
        for(int j=0; j<V; j++)
        {
            if(graph[u][j]&&visit[j]==false&&graph[u][j]<vertex[j])
            {
                parent[j]=u;
                vertex[j]=graph[u][j];
            }
        }
    }
    print(parent,graph);
}
int main()
{

    int graph[V][V] =
        {{0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };
    primMST(graph);

}
