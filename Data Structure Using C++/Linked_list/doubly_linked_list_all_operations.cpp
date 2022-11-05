#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void menu()
{
    cout << "\n=====Choice Menu=====\n";
    cout << "1.Create Node" << endl;
    cout << "2.Insert A Node At Head" << endl;
    cout << "3.Insert A Node At Tail" << endl;
    cout << "4.Insert A Node At Nth Position" << endl;
    cout << "5.Delete A Node By Value" << endl;
    cout << "6.Delete A Node At Head" << endl;
    cout << "7.Delete A Node At Tail" << endl;
    cout << "8.Delete A Node At Nth Position" << endl;
    cout << "9.Is List Empty?" << endl;
    cout << "10.Find Nth Element" << endl;
    cout << "11.Number Of Nodes" << endl;
    cout << "12.Display List" << endl;
    cout << "13.Quit" << endl;
    cout << "Enter Your Choice: ";
}
void createNode(struct node **h,struct node **t,int data)
{
    struct node *cur,*ptr;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->prev=NULL;
    cur->data=data;
    cur->next=NULL;
    if(*h==NULL && *t==NULL)
    {
        *h=*t=cur;
    }
    else
    {
        // we can add next node before or after the given list
        // code for  add node before list

        // cur->next=*h;
        // cur->next->prev=cur;
        // *h=cur;

        // code for  add node after list

        ptr=*h;
        cur->prev=*t;
        (*t)->next=cur;
        *t=cur;
    }
}
void insertAtHead(struct node **h,int data)
{
    struct node *cur;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->prev=NULL;
    cur->data=data;
    cur->next=NULL;
    if(*h==NULL)
   {
       *h=cur;
   }
   else
   {  
    cur->next=*h;
    cur->next->prev=cur;
    *h=cur;
   }
    
}
void insertAtTail(struct node **h,struct node **t,int data)
{
   struct node *cur;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->prev=NULL;
    cur->data=data;
    cur->next=NULL;
   if(*h==NULL && *t==NULL)
   {
       *h=*t=cur;
   }
   else
   {  
    cur->prev=*t;
    (*t)->next=cur;
    *t=cur;
   }
}
void insertAtNthPosition(struct node **h,struct node **t,int data,int pos)
{
   struct node *cur,*ptr;
    ptr=*h;
    cur=(struct node *)malloc(sizeof(struct node));
    cur->prev=NULL;
    cur->data=data;
    cur->next=NULL;
    if(*h==NULL)
    {
        *h=*t=cur;
    }
    else if(pos==0)
    {
        cur->next=*h;
        cur->next->prev=cur;
        *h=cur;

    }
    else
    {
        int i=0;
        ptr=*h;
        while(i<pos-2 && ptr->next!=NULL)
        {
            ptr=ptr->next;
            i++;
        }
        cur->next=ptr->next;
        ptr->next->prev=cur;
        cur->prev=ptr;
        ptr->next=cur;

    }
}
void deleteByValue(struct node **h,int data)
{

}
void deleteHead(struct node **h)
{

}
void deleteTail(struct node **h)
{

}
void deleteByPosition(struct node **h,int pos)
{


}
void isListEmpty(struct node **h)
{

}
void findNthElement(struct node **h,int data)
{

}
void countNodes(struct node *h)
{

}
void display(struct node *h)
{
    if(h==NULL){
        cout<<"List Is Empty.\n"<<endl;
    }
}
int main()
{
  // created node locally
    struct node *head = NULL;
    struct node *tail= NULL;
    int no, data, choice, x = 1, pos;
    cout << "Enter No.Of Nodes Want To Create Previously: ";
    cin >> no;
    for (int i = 0; i < no; i++)
    {
        cout << "Enter Data For " << i + 1 << "Node." << endl;
        cin >> data;
        createNode(&head,&tail, data);
    }
    while (x)
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Data For Node: ";
            cin >> data;
            createNode(&head,&tail, data);
            break;
        case 2:
            cout << "Enter Data For Node: ";
            cin >> data;
            insertAtHead(&head, data);
            break;
        case 3:
            cout << "Enter Data For Node: ";
            cin >> data;
            insertAtTail(&head,&tail,data);
            break;
        case 4:
            cout << "Enter Data For Node: ";
            cin >> data;
            cout << "Enter Position For the Node: ";
            cin >> pos;
            insertAtNthPosition(&head,&tail, data, pos);
            break;
        case 5:
            cout << "Enter Element To Be Deleted: ";
            cin >> data;
            deleteByValue(&head, data);
            break;
        case 6:
            deleteHead(&head);
            break;
        case 7:
            deleteTail(&head);
            break;
        case 8:
            cout << "Enter Position To Be Deleted: ";
            cin >> pos;
            deleteByPosition(&head, pos);
            break;
        case 9:
            isListEmpty(&head);
            break;
        case 10:
            cout << "Enter Data To Be Found: ";
            cin >> data;
            findNthElement(&head, data);
            break;
        case 11:
            countNodes(head);
            break;
        case 12:
            display(head);
            break;
        default:
            break;
        }
        cout << "Do You Want To Continue(Y=1/N=0): ";
        cin >> x;
    }
    cout << "\n\t\t=====Thanks For Coming Here=====\t\t\n";
    
return 0;
}