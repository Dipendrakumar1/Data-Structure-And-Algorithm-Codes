#include <bits/stdc++.h>
using namespace std;
struct node
{
    struct node *left;
    char data;
    struct node *right;
};
struct node *root = NULL;
struct node *createNode(char ch)
{
    struct node *cur;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = ch;
    cur->left = cur->right = NULL;
    return cur;
}
void inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " --> ";
    inOrder(root->right);
}
int main()
{
    root = createNode('a');
    root->left = createNode('b');
    root->left->right = createNode('d');
    root->left->right->left = createNode('e');
    root->right = createNode('c');
    root->right->left = createNode('f');
    root->right->right = createNode('g');
    inOrder(root);
    cout << endl;
    return 0;
}
