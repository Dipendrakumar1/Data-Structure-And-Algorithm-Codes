#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
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
    srand(time(NULL));
    struct node *head=NULL;
    struct node *cur,*ptr;
    for(int i=0;i<4;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        cur->data=random()%100;
        cur->next=NULL;
        cur->prev=NULL;
        if(head==NULL)
        {
            head=cur;
        }
        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=cur;
        }
    }
    printList(head);
 
return 0;
}