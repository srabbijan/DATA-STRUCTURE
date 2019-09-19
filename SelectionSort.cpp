#include<bits/stdc++.h>
using namespace std;

int main()
{
     //array size
    int n;
    scanf("%d",&n);
    int arr[n];
//input n element
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
//Selection Sort Algo
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
          {if (arr[j] < arr[min_idx])
            min_idx = j;
            }
            int t;
            t=arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = t;
    }

    //output result
   for (int i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");

    return 0;
}

