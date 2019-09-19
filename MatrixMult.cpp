#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=0;
            for(int k=0;k<3;k++)
            sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }

}
