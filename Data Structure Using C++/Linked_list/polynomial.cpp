#include<bits/stdc++.h>
using namespace std;
struct node{
    int exp;
    int coeff;
    struct  node *next;
};
void createPoly(struct node **h)
{
int nt;
cout<<"Enter Number Of Terms: ";
cin>>nt;
struct node *cur,*ptr;
for(int i=0;i<nt;i++)
{
    cur=(struct node *)malloc(sizeof(struct node));
    cout<<"\nEnter Coeff And Exp Of "<<i+1<<"  Term :-->  ";
    cin>>cur->coeff>>cur->exp;
    cur->next=NULL;
    if((*h)==NULL)
    {
        *h=cur;
        ptr=cur;
    }
    else
    {
        ptr->next=cur;
        ptr=cur;
    }
}
}
void join(struct node **h1,struct node *h2)
{
    if((*h1)==NULL)
    {
          *h1=h2;
    }
    else
    {
        struct node *ptr=*h1;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=h2;
    }
}
void simplify(struct node **h)
{
    struct node *ptr,*ptr1,*prev;
    ptr=*h;
    while(ptr!=NULL)
    {
        prev=ptr;
        ptr1=ptr->next;
        while(ptr1!=NULL)
        {
            if(ptr->exp==ptr1->exp)
            {
                ptr->coeff=ptr->coeff+ptr1->coeff;
                prev->next=ptr1->next;
                free(ptr1);
                ptr1=prev;
            }
            prev=ptr1;
            ptr1=ptr1->next;
        }
    ptr=ptr->next;
    }
}
void printPoly(struct node *h)
{
    if((h)==NULL)
    {
       cout<<"List Is Empty."<<endl;
    }
    else
    {
        while(h!=NULL)
        {
        cout<<h->coeff<<"x^"<<h->exp<<"+";
        h=h->next;
        }
    }
    cout<<endl;
}
int main()
{
 struct node *h1,*h2;
 h1=h2=NULL;
 cout<<"For Polynomial-1"<<endl;
 createPoly(&h1);
 cout<<"For Polynomial-2"<<endl;
 createPoly(&h2);
 join(&h1,h2);
 printPoly(h1);
 simplify(&h1);
 printPoly(h1);
return 0;
}