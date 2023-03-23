#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *left;
    int data;
    struct node *right;
};
struct node *root=NULL;
struct node* createNode(int val)
{
    struct node *cur;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->data=val;
    cur->left=cur->right=NULL;
    return cur;
}
void inOrder(struct node *r)
{
    if(r!=NULL)
    {
        inOrder(r->left);
        cout<<r->data<<" ";
        inOrder(r->right);
    }
}
void preOrder(struct node *r)
{
    if(r!=NULL)
    {
        cout<<r->data<<" ";
        preOrder(r->left);
        preOrder(r->right);
    }
}
void postOrder(struct node *r)
{
    if(r!=NULL)
    {
        postOrder(r->left);
        postOrder(r->right);
        cout<<r->data<<" ";
    }
}
int main()
{
 root=createNode(7);
 root->left=createNode(8);
 root->right=createNode(3);
 root->right->left=createNode(4);
 inOrder(root);
 cout<<endl;
 preOrder(root);
 cout<<endl;
 postOrder(root);
 cout<<endl;
return 0;
}
