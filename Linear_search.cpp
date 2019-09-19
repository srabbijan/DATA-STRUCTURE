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


    int x;
    scanf("%d",&x);///Searching Value

    ///searching
    for(int i=0; i<n; i++)
    {
        if (array[i]==x)
        {
            printf("FOUND\n");
            exit(0);
        }

    }
    printf("NOT FOUND\n");
    return 0;
}
