#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *next;
    int data;
    struct node *prev;
};
void insertion(struct node **h,int val,int pos)
{
    struct node *cur=(struct node *)malloc(sizeof(struct node));
    cur->next=cur->prev=NULL;
    cur->data=val;
    if((*h)==NULL)
    {
        *h=cur->next=cur->prev=cur;
    }
    else if((*h)==(*h)->next)
    {
        cur->prev=(*h);
        cur->next=*h;
        cur->prev->next=cur;
        (*h)->prev=cur;
    }
    else if(pos==0)
    {
         cur->next=*h;
         cur->prev=(*h)->prev;
         (*h)->prev=cur;
         cur->prev->next=cur;
         *h=cur;
    }
    else
    {
        struct node *ptr=*h;
        int i=0;
        while(i<pos-1)
        {
            ptr=ptr->next;
            i++;
        }
        if(ptr->next==*h)
        {
            cur->prev=(*h)->prev;
            cur->next=*h;
            (*h)->prev->next=cur;
            (*h)->prev=cur;
        }
        else
        {
            cur->prev=ptr;
            cur->next=ptr->next;
            ptr->next=cur;
            cur->next->prev=cur;
        }
    }
}
void printList(struct node *h)
{
 struct node *tmp=h;
  do
  {
    cout<<h->data<<" --> ";
    h=h->next;
  }while(h!=tmp);
}
void deletion(struct node **h,int val)
{
    if(*h==NULL)
    {
        cout<<"List Is Empty."<<endl;
    }
    
}
int main()
{
    srand(time(NULL));
struct node *head=NULL,*cur;
for (int i = 0; i < 4; i++)
{
    cur=(struct node *)malloc(sizeof(struct node));
    // cin>>cur->data;
    cur->next=cur->prev=NULL;
    cur->data=random()%100;
    if(head==NULL)
    {
        head=cur->prev=cur->next=cur;
    }
    else
   {
    
    cur->prev=head->prev;
    cur->next=head;
    head->prev->next=cur;
    head->prev=cur;
   }
}
printList(head);
insertion(&head,113,2);
cout<<endl;
printList(head);
cout<<endl;
return 0;
}