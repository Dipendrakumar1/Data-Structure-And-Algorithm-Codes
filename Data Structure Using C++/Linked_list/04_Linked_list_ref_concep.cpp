#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void insert(struct node **h,int data,int pos)
{
    struct node *cur,*ptr;
    cur=(struct node*)malloc(sizeof(struct node));
    cur->data=data;
    cur->next=NULL;
    // above all stuffs for create and store 
    if(*h==NULL)
    *h=cur;
    else if(pos==0)
    {
        cur->next=*h;
        *h=cur;
    }
    else
    {
       ptr=*h;
       int i=0;
       while(i<pos-1 && ptr->next!=NULL)
       {
        ptr=ptr->next;
        i++;
       }
       cur->next=ptr->next;
       ptr->next=cur;
    }
    
}
void deletionNode(struct node **h,int pos)
{
      struct node *ptr,*prev;
      ptr=prev=*h;
      if(*h==NULL)
      {
        cout<<"No Node Is Present."<<endl;
      } 
      else if(pos==0)
      {
          *h=(*h)->next;
          free(ptr);
      }
      else
      {
          int i=0;
          while(i<pos-2 && prev->next!=NULL)
          {

            prev=prev->next;
            i++;
          }
          ptr=prev->next;
          prev->next=ptr->next;
          free(ptr);
      }
}
void display(struct node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" -> ";
        n=n->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    struct node *head=NULL;
    int n;
    // cout<<"Enter No Of Nodes: ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int data,pos;
    //     cout<<"Enter Data  And Position For Node "<<i+1<<" :";
    //     cin>>data>>pos;
    //     insert(&head,data,pos);
    // }
    insert(&head,20,2);
    insert(&head,23,1);
    insert(&head,32,3);
    insert(&head,24,7);
    display(head);
    deletionNode(&head,2);
    deletionNode(&head,5);
    display(head);
    cout<<endl;
    
return 0;
}