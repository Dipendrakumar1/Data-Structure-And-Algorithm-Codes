#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void printList(struct node *n)
{
  while (n!=NULL)
  {
    cout<<n->data<<"->";
    n=n->next;
  }
}
int main()
{
    struct node *cur;
    int n;
    cout<<"Enter No.of Nodes: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        cout<<"Enter Data: ";
        cin>>cur->data;
        cur->next=NULL;
        if(head==NULL)
        {
            head=tail=cur;
        }
        else
        {
             tail->next=cur;
             tail=cur;
        }
    }
    
 printList(head);
return 0;
}