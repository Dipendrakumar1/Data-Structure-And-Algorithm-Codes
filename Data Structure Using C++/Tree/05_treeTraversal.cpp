#include <bits/stdc++.h>
#define MAX 100
using namespace std;
struct node
{
    int val;
    struct node *left;
    struct node *right;
    struct node *next;
};
typedef struct
{
    struct node *data[MAX];
    int top;
} Stack;
struct node *root = NULL;
Stack s1;
struct node *createNode(int val)
{
    struct node *cur;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->val = val;
    cur->left = cur->right = NULL;
    return cur;
}
void init(Stack *s)
{
    s->top = -1;
}
int isEmpty(Stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    return 0;
}
void push(Stack *s, struct node *r)
{
    if (s->top == MAX - 1)
        return;
    s->top++;
    s->data[s->top] = r;
}
void pop(Stack *s, struct node **ptr)
{
    if (s->top == -1)
        return;
    *ptr = s->data[s->top];
    s->top--;
}
void inOrder(struct node *r)
{
    if (r == NULL)
        return;
    struct node *ptr;
    struct node *ptr1;
     ptr=r;
     while(ptr!=NULL)
     {
        push(&s1,ptr);
        ptr=ptr->left;
     }
     while(!isEmpty(s1))
     {
        pop(&s1,&ptr1);
        cout<<ptr1->val<<" ";
        for(ptr=ptr1->right;ptr!=NULL;ptr=ptr->left)
        push(&s1,ptr);
     } 
}
void inorder(struct node *r)
{
 stack<struct node *> s;
 s.push(r);
}
int main()
{
    init(&s1);
    root = createNode(7);
    root->left = createNode(8);
    root->right = createNode(3);
    root->right->left = createNode(4);
    inOrder(root);
    cout << endl;
    return 0;
}