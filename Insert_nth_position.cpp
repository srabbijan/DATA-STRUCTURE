#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    node *next;
};
struct node *head;
void in(int v, int n)
{
    node *temp = new node();
    temp ->value = v;
    temp->next = NULL;

    if(n==1)
    {
        temp -> next = head;
        head = temp;
        return ;
    }

    node *t = head;


    for(int i=1;i<n-1;i++)
    {
        t = t -> next;
    }

    temp -> next =  t -> next;
    t -> next = temp;

}
void print()
{
    node *temp =head;
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    int n;
    printf("Enter length :");
    scanf("%d",&n);
    while(n--)
    {
        int v,n;
        scanf("%d %d",&v,&n);
        in(v,n);
        print();
    }

    return 0;
}
