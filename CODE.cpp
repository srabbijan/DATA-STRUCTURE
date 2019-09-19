#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5], path[5][5];
    for ( int i = 1 ; i <= 4; i += 1 )
    {
        for ( int j = 1 ; j <= 4 ; j += 1 )
        {
            if ( i == j )
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = 100;
            }
            path[i][j] = 0;
        }
    }
    for ( int i = 0 ; i < 6 ; i += 1 )
    {
        int u, v, w;
        cin >> u >> v >> w;
        arr[u][v] = w;
        path[u][v] = v;
    }
    for ( int k = 1 ; k <= 4 ; k += 1 )
    {
        for ( int i = 1 ; i <= 4 ; i += 1 )
        {
            for ( int j = 1 ; j <= 4 ; j += 1 )
            {
                if ( arr[i][j] > arr[i][k] + arr[k][j] )
                {
                    arr[i][j] = arr[i][k] + arr[k][j];

                    path[i][j] = k;
                }
            }
        }
    }
    while(1)
    {
        cout << "\nEnter start and end\n\n";
        int start, end;
        cin >> start >> end;
        int y = path[start][end];
        if ( start == end )
        {
            cout << "\nYou are at same node\n\n";
        }
        else if ( y == 0 )
        {
            cout << "\nSorry. No path\n\n";
        }
        else
        {
            cout << "\t" << start;
            while ( 1 )
            {
                cout << "\t" << y;
                if ( y == end )
                {
                    break;
                }
                y = path[y][end];
            }
        }
    }
}
