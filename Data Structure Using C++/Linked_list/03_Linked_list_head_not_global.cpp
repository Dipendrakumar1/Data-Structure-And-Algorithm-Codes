#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void insertion(struct node **h,int d)
{
    struct node *cur,*ptr;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->next=NULL;
    cur->data=d;
    if(*h==NULL)
    {
        *h=cur;
    }
    else
    {
        ptr=*h;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=cur;

    }
}
void display(struct node *h)
{
    while(h!=NULL)
    {
        cout<<h->data<<"->";
        h=h->next;
    }
    cout<<"NULL";
}
int main()
{
 struct node *head=NULL;
 cout<<"Enter No Of Nodes: ";
 int n;
 cin>>n;
 for (int i = 0; i < n; i++)
 {
    insertion(&head,i+1);
 }
 display(head);
 cout<<endl;
return 0;
}