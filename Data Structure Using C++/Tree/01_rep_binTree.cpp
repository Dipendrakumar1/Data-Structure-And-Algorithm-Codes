#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        this->data=val;
        this->left=this->right=NULL;
    }
};
 Node* buildTree(Node *r){
        int data;
        cout<<"Enter Data:--> ";
        cin>>data;
        r =new Node(data);
        if(data==-999){
            return NULL;
        }
        cout<<"Enter data for inserting in left "<<data<<endl;
        r->left=buildTree(r->left);
        cout<<"Enter data for inserting in right "<<data<<endl;
        r->right=buildTree(r->right);

      return r;
    }
void preOrderTraversal(Node *r){
    if(r==NULL){
        return;
    }
    cout<<r->data<<" --> ";
    preOrderTraversal(r->left);
    preOrderTraversal(r->right);
}
void postOrderTraversal(Node *r){
    if(r==NULL){
        return;
    }
    preOrderTraversal(r->left);
    preOrderTraversal(r->right);
    cout<<r->data<<" --> ";
}
void inOrderTraversal(Node *r){
    if(r==NULL){
        return;
    }
    preOrderTraversal(r->left);
    cout<<r->data<<" --> ";
    preOrderTraversal(r->right);
}

int main()
{
 Node *root=NULL;
root= buildTree(root);
cout<<"----------------PreOrder Traversal Of Tree------------"<<endl;
preOrderTraversal(root);
cout<<"\n----------------PostOrder Traversal Of Tree------------"<<endl;
postOrderTraversal(root);
cout<<"\n----------------InOrder Traversal Of Tree------------"<<endl;
inOrderTraversal(root);
cout<<endl;
return 0;
}