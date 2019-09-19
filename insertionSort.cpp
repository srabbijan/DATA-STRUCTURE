#include<stdio.h>
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
//insertion sort algo
    int key, j;
   for (int i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }

   //output result
   for (int i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");

    return 0;
}
