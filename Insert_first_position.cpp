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
    temp ->value = v;
    temp->next = head;
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
        print();
    }
    return 0;
}
