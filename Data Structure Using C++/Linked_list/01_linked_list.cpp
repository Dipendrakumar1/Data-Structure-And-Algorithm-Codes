#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next; //--> since this is pointing to the own structure,it is called 
                       // self-referential structure
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
  srand(time(NULL));
 struct node *cur=NULL;
 for (int i = 0; i < 4; i++)
 {
   cur=(struct node *)malloc(sizeof(struct node));
  //  cout<<"Enter the data: ";
  // cin>>cur->data;
  cur->data=random()%100;
   cur->next=NULL;
   if(head==NULL)
   tail=head=cur;
   else
   {
    tail->next=cur;
    tail=cur;
   }
 }
 printList(head);
 cout<<endl;
return 0;
}