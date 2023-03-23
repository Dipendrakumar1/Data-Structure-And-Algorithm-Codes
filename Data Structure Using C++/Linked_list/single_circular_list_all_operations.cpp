#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void menu()
{
    cout<<"\n==== Choice Menu For Single Circular List ====\n"<<endl;
    cout<<"1.For Create A New Node"<<endl;
    cout<<"2.For Insertion At Head"<<endl;
    cout<<"3.For Insertion At Nth Position"<<endl;
    cout<<"4.For Delete A Node "<<endl;
    cout<<"5.For Delete Node At Head"<<endl;
    cout<<"6.For Delete Node At Nth Position"<<endl;
    cout<<"7.For Delete Node By Value"<<endl;
    cout<<"8.For List Traversal"<<endl;
    cout<<"9.Exit "<<endl;
    cout<<"Enter Your Choice:- ";
}
struct node * memoryAllo()
{
    struct node *cur;
    cur=(struct node *)malloc(sizeof(struct node));
    return cur;
}
void createNode(struct node **h,int data)
{
    struct node *cur,*ptr;
    cur=memoryAllo();
    cur->data=data;
    cur->next=NULL;
    if(*h==NULL)
    {
       *h=cur;
       cur->next=*h;
    }
    else
    {
        ptr=*h;
        while(ptr->next!=*h)
        {
            ptr=ptr->next;
        }
        cur->next=*h;
        ptr->next=cur;
        
    }
}
void insertAtHead(struct node **h,int data)
{
   struct node *cur=memoryAllo();
   struct node *ptr;
   cur->data=data;
   cur->next=NULL;
   if(*h==NULL)
   {
    *h=cur;
    cur->next=*h;
   }
   else
   {
    cur->next=*h;
    ptr=*h;
    while(ptr->next!=*h)
    {
        ptr=ptr->next;
    }
    ptr->next=cur;
    *h=cur;
   }
}
void insertAtNthPos(struct node **h,int data,int pos)
{
    struct node *cur=memoryAllo();
   struct node *ptr;
   cur->data=data;
   cur->next=NULL;
   if(*h==NULL)
   {
    *h=cur;
    cur->next=*h;
   }
   else if(pos==0)
   {
    cur->next=*h;
    ptr=*h;
    while(ptr->next!=*h)
    {
        ptr=ptr->next;
    }
    ptr->next=cur;
    *h=cur;
   }
   else
   {
      ptr=*h;
      int i=0;
      while(i<pos-2 && ptr->next!=*h)
      {
        ptr=ptr->next;
        i++;
      }
      if(ptr->next==*h)
      {
        cur->next=*h;
        ptr->next=cur;
      }
      else
      {
         cur->next=ptr->next;
         ptr->next=cur;
      }
   }
}
void deleteNode(struct node **h)
{
    struct node *ptr,*prev;
    if(*h==NULL)
    {
        cout<<"List Is Empty."<<endl;
    }
    else if((*h)->next==*h)
    {
        ptr=*h;
        *h=NULL;
        free(ptr);
    }
    else
    {
        ptr=*h;
        while(ptr->next!=*h)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=*h;
        free(ptr);
        
    }
}
void deleteAtHead(struct node **h)
{
    struct node *ptr;
    if(*h==NULL)
    {
        cout<<"List Is Empty."<<endl;
    }
    else
    {
     ptr=*h;
     *h=(*h)->next;
     ptr->next=NULL;
      free(ptr);   
     cout<<"ptr: "<<ptr<<endl;
    }
}
void displayList(struct node **h)
{
     if(*h==NULL)
    {
        printf("List Is Empty.\n");
    }
    else
    {
    struct node *ptr=*h;
    while (ptr->next!=*h)
    {
        cout<<ptr->data<<"--> ";
        ptr=ptr->next;
    }
    cout<<ptr->data<<"--> "<<endl;
    }
}
int main()
{
struct node *head=NULL;
int n,data,x=1,choice,pos;
cout<<"Enter Number Of Nodes Want To Create Previously:- ";
cin>>n;
for (int i = 0; i < n; i++)
{
    cout<<"Enter Data For Node "<<i+1<<" :- ";
    cin>>data;
    createNode(&head,data);
}
while(x)
{
    menu();
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter Data For Node :- ";
        cin>>data;
        createNode(&head,data);
        break;
    case 2:
        cout<<"Enter Data For Node :- ";
        cin>>data;
        insertAtHead(&head,data);
        break;
    case 3:
        cout<<"Enter Data For Node :- ";
        cin>>data;
        cout<<"Enter Position To Be Insert:- ";
        cin>>pos;
        insertAtNthPos(&head,data,pos);
        break;
    case 4:
        deleteNode(&head);
        break;
    case 5:
        deleteAtHead(&head);
        break;
    case 8:
        displayList(&head);
        break;
    case 9:
        exit(0);
        break;
    default:
         cout<<"Wrong Input!!! ,please try Again...."<<endl;
        break;
    }
    cout<<"Do You Want To Continue(y=1/n=0):- ";
    cin>>x;
}
cout<<"\n =====  HAPPY CODING 😊 ===== \n"<<endl;
return 0;
}