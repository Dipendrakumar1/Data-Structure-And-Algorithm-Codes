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
void postOrder(struct node *r)
{
    if (r == NULL)
        return;
    struct node *cur, *ptr, *ptr1;
    for (cur = r; cur != NULL; cur = cur->left)
    {
        if (cur->right)
            push(&s1, cur->right);
        push(&s1, cur);
    }
    while (!isEmpty(s1))
    {
        pop(&s1, &ptr);
        if (!ptr->right)
        {
            cout << ptr->val << " ";
        }
        else
        {
            if (isEmpty(s1))
            {
                cout << ptr->val << " ";
            }
            else
            {
                pop(&s1, &ptr1);
                if (ptr->right != ptr1)
                {
                    cout << ptr->val << " ";
                    push(&s1, ptr1);
                }
                else
                {
                    push(&s1, ptr);
                    for (cur = ptr1; cur != NULL; cur = cur->left)
                    {
                        if (cur->right)
                            push(&s1, cur->right);
                            push(&s1, cur);
                    }
                }
            }
        }
    }
}
int main()
{
    init(&s1);
    root = createNode(7);
    root->left = createNode(8);
    root->right = createNode(3);
    root->right->left = createNode(4);
    postOrder(root);
    cout << endl;
    return 0;
}