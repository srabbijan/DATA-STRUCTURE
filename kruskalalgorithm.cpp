#include<bits/stdc++.h>
using namespace std;
#define v 4
int parent[v];
int finding(int);
int uni(int ,int);
int main()
{
    int g[v][v],mini=9999,k=0,cost=0,i,j,a,b,u,v1;
    cout<<"Enter the graph graph\n";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cin>>g[i][j];
            if(g[i][j]==0)
                g[i][j]=9999;
        }
    }
    for(;k<v-1;){
            mini=9999;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(g[i][j]<mini)
            {
                mini=g[i][j];
                a=u=i;b=v1=j;
            }
        }
    }
    u=finding(u);
    v1=finding(v1);
    if(uni(u,v1))
       {
           cout<<a<<"to"<<b<<"="<<mini<<"\n";
           cost+=mini;
           k++;
       }
        g[a][b]=g[b][a]=9999;
}
       cout<<"\n"<<cost;
    return 0;
}
int finding(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}

