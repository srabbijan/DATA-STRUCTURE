#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     scanf("%d",&n); ///Number Of Element.
    int array [n];

    ///Initial Value
    for(int i=0; i<n; i++)
        scanf("%d",&array[i]);

 int x;  ///searching value
     scanf("%d",&x);


     int left=0;
     int right=n-1;

     ///searching
     while(left<=right)
     {
         int mid = left+(right-left)/2;

         if(array[mid]==x)
         {
             printf("FOUND\n");
             exit(0);
         }
         else if(array[mid]<x)
            left=mid+1;
         else right=mid-1;

     }

     printf("NOT FOUND\n");

     return 0;
 }
