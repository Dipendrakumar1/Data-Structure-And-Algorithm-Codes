#include <iostream>
using namespace std;
// representation of nested structure
struct node
{
    int a;
    float b;
};
typedef struct node node;
void f1(node p)
{
    p.a = 3;
    cout << p.a << endl;
}
void f2(node *q)
{
    (*q).a = 10; // we can q->a=10 also.
    cout << q->a << endl;
}
int main()
{
    struct node c = {2, 6.7};
    cout<<"\n====Call-By-Value====\n";
    f1(c); // -->call-by-value
    cout << c.a << endl;
    cout<<"\n====Call-By-Reference====\n";
    f2(&c); // -->call-by-reference
    cout << c.a << endl;
    cout << endl;
    return 0;
}