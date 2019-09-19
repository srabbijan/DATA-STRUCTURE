
#include<bits/stdc++.h>
using namespace std;
#define v 4

int main()
{
    int g[v][v],i,j,cost[v],s,flag=0,k;
    cout<<"enter the value of graph";
    for(i=0;i<v;i++)
    {
        cost[i]=9999;
        for(j=0;j<v;j++)
        {
            cin>>g[i][j];
            if(g[i][j]==0)
                g[i][j]=9999;
        }
    }
    cout<<"Enter source\n";
    cin>>s;
    cost[s]=0;
    for(i=0;i<v-1;i++)
      for(j=0;j<v;j++)
      {
          for(k=0;k<v;k++)
          {
              if(g[j][k]+cost[j]<cost[k]&&g[j][k]!=9999)
              {
                  cost[k]=g[j][k]+cost[j];
                  flag=0;
              }
          }
      }
      for(i=0;i<v;i++)
      {
          cout<<s<<"->"<<i<<" distance : "<<cost[i]<<"\n";
      }
    return 0;
}
