#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    node *next;
};
struct node *head;
void insert(int v)
{
    node *new_node;
    new_node = new node();
    new_node -> value = v;
    new_node-> next = NULL;

    if(head==NULL)
        head=new_node;
    else
    {
        node *temp;
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=new_node;
    }
}

void output()
{
    node *temp =head;
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
}
int main()
{
    head = NULL;
    insert(1);
    insert(10);
    insert(5);
    insert(7);

    output();

    return 0;
}
