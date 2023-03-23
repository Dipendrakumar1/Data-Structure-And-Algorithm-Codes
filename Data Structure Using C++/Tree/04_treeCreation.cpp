#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *left;
    int data;
    struct node *right;
};
struct node* createNode(int val)
{
    struct node *cur;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->data=val;
    cur->left=cur->right=NULL;
    return cur;
}
struct node* buildTree(struct node *r)
{
    cout<<"Enter Data:--> ";
    int data;
    cin>>data;
    r=(struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->left=r->right=NULL;
    if(data==-1111)
    {
        return NULL;
    }
    struct node *cur=createNode(data);
    cout<<"Enter Data for inserting left of "<<data<<endl;
    r->left=buildTree(r->left);
    cout<<"Enter Data for inserting right of "<<data<<endl;
    r->right=buildTree(r->right);
    return r;
}
int main()
{
struct node *root=NULL;
root=buildTree(root);
 cout<<endl;
return 0;
}
