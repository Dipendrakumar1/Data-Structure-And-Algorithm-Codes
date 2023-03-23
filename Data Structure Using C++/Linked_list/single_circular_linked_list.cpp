#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *next;
    int data;
};
void insertion(struct node *h)
{
    
}
void printList(struct node **h)
{
    if(*h==NULL)
    {
        printf("List Is Empty.\n");
    }
    else
    {
    struct node *ptr=*h;
//     while (ptr->next!=*h)
//     {
//         cout<<ptr->data<<"--> ";
//         ptr=ptr->next;
//     }
//    cout<<ptr->data<<"--> "<<endl;

  // using do- while loop instead of while loop 
do{
    cout<<ptr->data<<" --> ";
    ptr=ptr->next;
}while(ptr != *h);

    }
}
int main()
{
    srand(time(NULL));
struct node *head=NULL,*cur,*ptr;
ptr=head;
printList(&head);
for (int i = 0; i < 4; i++)
{
    cur=(struct node *)malloc(sizeof(struct node));
    cin>>cur->data;
    // cur->data=random()%100;
    cur->next=NULL;
    if(head==NULL)
    {
        head=cur;
        cur->next=head;
        ptr=head;
    }
    else
   {
    
    //  ptr->next=cur;
    //  cur->next=head;
    cur->next=head;
    ptr->next=cur;
    ptr=cur;
    }
}
printList(&head);
return 0;
}