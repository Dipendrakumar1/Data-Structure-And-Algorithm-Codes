#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void menuDriven()
{
  cout<<"\n=====Choice Menu=====\n";
  cout<<"1.Create Node"<<endl;  
  cout<<"2.Delete Node From Tail"<<endl;  
  cout<<"3.Insert A Node At Tail"<<endl;  
  cout<<"4.Insert A Node At Head"<<endl;  
  cout<<"5.Insert A Node In Between"<<endl;  
  cout<<"6.Display List"<<endl;  
  cout<<"7.Quit"<<endl;  
  cout<<"8.Display Head And Tail Node"<<endl;  
  cout<<"Enter Your Choice: ";
}
void insertAtPosition()
{
  struct node *cur=(struct node *)malloc(sizeof(struct node));
  struct node *t;
   cur->next=NULL;
   cout<<"Enter Data: ";
   cin>>cur->data;
   int p;
   cout<<"Enter Position: ";
   cin>>p;
   t=head;
   for(int i=0;i<p-1;i++)
   {
      t=t->next;
   }
   cur->next=t->next;
   t->next=cur;
}
void insertTail()
{
  struct node *cur=(struct node *)malloc(sizeof(struct node));
   cur->next=NULL;
   cout<<"Enter Data: ";
   cin>>cur->data;
   tail->next=cur;
   tail=cur;
}
void insertHead()
{
  struct node *cur=(struct node *)malloc(sizeof(struct node));
   cur->next=NULL;
   cout<<"Enter Data: ";
   cin>>cur->data;
   cur->next=head;
   head=cur;
}
void displayHeadTailNode()
{
    
        cout<<"Head Data->"<<head->data<<endl;
        cout<<"Tail Data->"<<tail->data<<endl;
   
}
void deleteNodeTail(struct node *n)
{
   
}
void createNode()
{
    struct node *cur;
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
void printList(struct node *n)
{
  int totnod=0;
  while (n!=NULL)
  {
    cout<<n->data<<"->";
    totnod++;
    n=n->next;
  }
    cout<<"NULL"<<endl;
  cout<<"Total No.of Nodes: "<<totnod<<endl;
}
int main()
{
    int n;
    cout<<"Enter No.of Nodes: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        createNode();
    }
    int x=1;
    int choice;
    while(x==1)
    {
      menuDriven();
      cin>>choice;
      switch(choice)
      {
        case 1:
        createNode();
        break;
        case 2:
        deleteNodeTail(head);
        break;
        case 3:
        insertTail();
        break;
        case 4:
        insertHead();
        break;
        case 5:
        insertAtPosition();
        break;
        case 6:
        printList(head);
        break;
        case 7:
        exit(0);
        break;
        case 8:
        displayHeadTailNode();
        break;
        default:
        cout<<"Wrong Input!!!"<<endl;
      }
      cout<<"Do You Want To Continue(y=1/n=0): ";
      cin>>x;
    }
    cout<<"\n===Thanks===\n";
return 0;
}