#include <bits/stdc++.h>
using namespace std;
struct node{
    int coeff;
    int exp;
    struct node *next;
};
void create(struct node **h)
{
    int nt;
    struct node *cur, *ptr;
    cout << "Enter Number Of Terms:-> ";
    cin >> nt;
    for (int i = 0; i < nt; i++)
    {
        cur = (struct node *)malloc(sizeof(struct node));
        cout << "Enter coeff and exp for " << i + 1 << " term:--> ";
        cin >> cur->coeff >> cur->exp;
        cur->next = NULL;
        if ((*h) == NULL)
        {
            *h = cur;
            ptr = cur;
        }
        else
        {
            ptr->next = cur;
            ptr = cur;
        }
    }
}
void mul(struct node *h1, struct node *h2, struct node **h)
{
    int cnt=0;
    struct node *ptr1, *ptr2, *cur, *ptr;
    ptr1 = h1;
    while (ptr1 != NULL)
    {
        ptr2 = h2;
        while (ptr2 != NULL)
        {
            cnt++;
            cur = (struct node *)malloc(sizeof(struct node));
            cur->coeff = ptr1->coeff * ptr2->coeff;
            cur->exp = ptr1->exp + ptr2->exp;
            cur->next = NULL;
            if ((*h) == NULL)
            {
                *h = cur;
                ptr = cur;
            }
            else
            {
                ptr->next = cur;
                ptr = cur;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    cout<<"Count= "<<cnt<<endl;
}
void simplify(struct node **h)
{
    // 15x^4+20x^3+5x^2+6x^3+8x^2+2x^1+9x^2+12x^1+3x^0
    struct node *ptr, *ptr1, *prev;
    ptr = *h;
    while (ptr != NULL)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if (ptr1->exp == ptr->exp)
            {
                ptr->coeff += ptr1->coeff;
                prev = ptr1->next;
                free(ptr1);
                ptr1 = prev;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
        ptr = ptr->next;
    }
}
void printPoly(struct node *h)
{
    if ((h) == NULL)
    {
        cout << "List Is Empty." << endl;
    }
    else
    {
        while (h != NULL)
        {
            cout << h->coeff << "x^" << h->exp << "+";
            h = h->next;
        }
    }
    cout << endl;
}
int main()
{
    struct node *h1, *h2, *h;
    h1 = h2 = h = NULL;
    cout << "Enter 1st Polynomial:--> "<<endl;
   create(&h1);
    cout << "Enter 2nd Polynomial:--> "<<endl;
    create(&h2);
    mul(h1, h2, &h);
    printPoly(h);
    cout<<endl;
    simplify(&h);
    printPoly(h);
    return 0;
}