#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    node *next;
};
struct node *head;

void in(int v)
{
    node *temp = new node();
    temp -> value = v;
    temp-> next = head;
    head = temp;
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
void dele(int n)
{
    node *t= head;
    if(n==1)
    {
        head = t -> next;
        free(t);
        return ;
    }
    int i;
    for(int i=0; i<n-2; i++)
    {
        t= t->next;
    }
    node *t1= t-> next;
    t -> next = t1 -> next;
    free(t1);
    ///delete (t1);
}
int main()
{
    head = NULL;
    int n;
    printf("Enter length :");
    scanf("%d",&n);
    while(n--)
    {
        int v;
        scanf("%d",&v);
        in(v);
        //print();
    }
    print();
    printf("Enter Delete Position.\n");
    int z;
    scanf("%d",&z);
    dele(z);
    print();
    return 0;
}

