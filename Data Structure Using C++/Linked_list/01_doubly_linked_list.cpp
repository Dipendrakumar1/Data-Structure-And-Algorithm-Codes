#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*tail=NULL;
void insert(int data,int pos)
{
    struct node *cur,*ptr;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->data=data;
    cur->prev=cur->next=NULL;
   if(head==NULL)
   {
    cout<<"List Is Empty."<<endl;
   } 
   else if(pos==0)
   {
     cur->next=head;
     head->prev=cur;
     head=cur;
   }
   else
   {
    ptr=head;
    int i=0;
     while(i<pos-2 && ptr->next!=NULL) 
     {
        ptr=ptr->next;
        i++;
     }
     cur->next=ptr->next;
     cur->next->prev=cur;
     cur->prev=ptr;
     ptr->next=cur;
   }
}
void deletePos(int pos)
{
  struct node *ptr=head;
    if(head==NULL)
    {
      cout<<"List Is Empty.\n"<<endl;
    }
    else if(pos==0)
    {
       head=ptr->next;
       ptr->next->prev=ptr->prev;
       free(ptr);
    }
    else
    {
      int i=0;
      while(i<pos-1 && ptr->next!=NULL)
      {
        ptr=ptr->next;
        i++;
      }
      ptr->prev->next=ptr->next;
      ptr->next->prev=ptr->prev;
      free(ptr);
    }
}
void printList()
{
    struct node *n=head;
  while (n!=NULL)
  {
    cout<<n->data<<" --> ";
    n=n->next;
  }
  cout<<endl;
  n=tail;
  while (n!=NULL)
  {
    cout<<n->data<<" --> ";
    n=n->prev;
  }
  cout<<endl;

}
int main()
{
    srand(time(NULL));
    struct node *cur;
    for(int i=0;i<4;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        cin>>cur->data;
        cur->next=NULL;
        cur->prev=NULL;
        if(head==NULL)
        {
            head=tail=cur;
        }
        else
        {
           cur->prev=tail;
           tail->next=cur;
           tail=cur;
        }
    }
    cout<<"Enter Data To Be Insert: ";
    int data;
    cin>>data;
    int pos;
    cout<<"Enter Position At To Be Insert: ";
    cin>>pos;
    insert(data,pos);
    printList();
    cout<<"Enter Position  To Be Delete: ";
    cin>>pos;
    deletePos(pos);
    printList();
 
return 0;
}