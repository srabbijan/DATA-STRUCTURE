#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
};

node *root=NULL;
node* findminimum(node *rootnode);
void insertnode(int value)
{
    node *temp;
    node *current;
    node *parent;

    temp = new node();
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)
    {
        root=temp;
        return;
    }
    current = root;
    while(true)
    {
        parent = current;
        if(value<= current->data)
        {
            current=current->left;
            if(current==NULL)
            {
                parent->left=temp;
                return;
            }
        }
        else
        {
            current=current->right;
            if(current==NULL)
            {
                parent->right=temp;
                return;
            }
        }
    }
}
node* deletenode(node *rootnode,int value)
{
    if(rootnode==NULL)
        return NULL;
    else if(value<rootnode->data)
        rootnode->left=deletenode(rootnode->left,value);
    else if(value>rootnode->data)
        rootnode->right=deletenode(rootnode->right,value);
    else
    { 
        if(rootnode->left == NULL&&rootnode->right==NULL)
            rootnode=NULL;
        else if(rootnode->left == NULL)
            rootnode=rootnode->right;
        else if (rootnode->right == NULL)
            rootnode=rootnode->left;
        else
        {
            node *temp = findminimum(rootnode->right);
            rootnode->data = temp->data;
            temp->right = deletenode(rootnode->right,temp->data);
        }
    }
    return rootnode;
}
node* findminimum(node *rootnode)
{
    if(rootnode->left == NULL)
        return rootnode;
    findminimum(rootnode->left);
}

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main()
{
    insertnode(15);
    insertnode(10);
    insertnode(25);
    insertnode(12);
    /*insertnode(8);
    insertnode(9);
    insertnode(3);*/

    inorder(root);

    printf("\n");
    deletenode(root,10);
    inorder(root);
}
