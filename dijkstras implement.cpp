#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >g[100000];
int par[100000],dis[100000],vis[100000];
void initial(int n)
{
    for(int i=0; i<=n; i++)
    {
        dis[i]=0;
        vis[i]=0;
        par[i]=0;
    }
}
dijkstra(int u,int n)
{
    priority_queue< pair<int,int>,vector<pair<int,int> >,greater< pair<int,int> > > pq;
    dis[u]=0;
    pq.push(make_pair(0,u));
    while(!pq.empty())
    {
        u=pq.top().second;
        pq.pop();
        vis[u]=1;
        for(int i=0; i<g[u].size(); i++)
        {
            int w=g[u][i].first;
            int v=g[u][i].second;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                par[v]=u;
                if(!vis[v])
                {
                    pq.push(make_pair(dis[v],v));
                }
            }
        }
    }
}
int main()
{
    int n,m,x,y,w,t,l=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        initial(n);
        for(int i=0; i<m; i++)
        {
            cin>>x>>y>>w;
            g[x].push_back(make_pair(w,y));
            g[y].push_back(make_pair(w,x));
        }
        for(int i=0; i<=n; i++)
        {
            dis[i]=100000000;
        }
        dijkstra(0,2);
        l++;
        if(dis[2]==100000000)
        {
            cout<<"Case "<<l<<": "<<"Impossible"<<endl;
            //cout<<dis[1]<<dis[3]<<dis[5]<<dis[6];
        }
        else
        {
            cout<<"Case "<<l<<": "<<dis[2]<<endl;
        }
        for(int i=0; i<=n; i++)
        {
            g[i].clear();
        }
    }
    return 0;
}
