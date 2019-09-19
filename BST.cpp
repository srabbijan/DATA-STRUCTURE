#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
};

node *root=NULL;

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
        parent  = current;
        if(value <= current->data)
        {
            current = current->left;
            if(current == NULL)
            {
                parent->left=temp;
                return;
            }
        }
        else
        {
            current = current -> right;
            if(current == NULL)
            {
                parent->right=temp;
                return;
            }
        }
    }
}

void inorder(node *rootnode)
{
    if (rootnode!=NULL)
    {
        inorder(rootnode->left);
        printf("%d ",rootnode->data);
        inorder(rootnode->right);
    }

}
void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void Search(int value)
{
    node *temp=root;
    bool b = false;
    while(true)
    {
        if(temp==NULL)
            break;
       else if(temp->data==value)
        {
            b=true;
            break;
        }
        else if(value< temp->data)
            temp=temp->left;
        else
            temp=temp->right;
    }
    if(b)
        printf("%d IS FOUND\n",value);
    else
        printf("%d Is NOT FOUND\n",value);
}
int main()
{
    /* Let's create BST
         50
       /    \
      30     70
     /  \    / \
    20   40  60  80 */
  // 50, 33,44,22,77,35,60,40
    ///Insert value in BST
    insertnode(50);
    insertnode(33);
    insertnode(44);
    insertnode(22);
    insertnode(77);
    insertnode(35);
    insertnode(40);
    ///Traversing
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    ///Searching an element.
    //Search(20);
    //Search(10);

}
