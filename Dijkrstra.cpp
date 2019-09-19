#include<bits/stdc++.h>
using namespace std;
#define INF 1000
int minmum(int dis[],int vis[])
{
    int m = INF,min_index;
    for(int i=0;i<5;i++)
    {
        if(!vis[i]&&dis[i]<=m)
            {m = dis[i];
        min_index = i;}
    }
    return min_index;
}
void print(int dis[])
{
    for(int i=0;i<5;i++)
        cout<<i<<"\t"<<dis[i]<<"\n";
}
void diskas(int graph[5][5], int start)
{
    int distance[5];
    int visit[5];
    for(int i=0;i<5;i++)
    {
        distance[i] = INF;
        visit[i] = false;
    }
    distance[start] = 0;
    for(int i=0;i<5;i++)
    {
        int u = minmum(distance,visit);
        visit[u] = true;
        for(int j=0;j<5;j++)
        {
            if(!visit[j]&&graph[u][j]&&distance[u]!=INF&&distance[u]+graph[u][j]<distance[j])
                distance[j] = distance[u]+graph[u][j];
        }
    }
    print(distance);
}
int main()
{
     int graph[5][5]={{0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };
    diskas(graph,0);
}

