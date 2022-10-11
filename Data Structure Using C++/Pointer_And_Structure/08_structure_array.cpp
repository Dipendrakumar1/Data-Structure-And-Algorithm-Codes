#include <iostream>
using namespace std;
// representation of nested structure
struct node
{
    int a;
    float b;
};
int main()
{

    struct node a[5];
    a[0].a = 10;
    (a + 1)->b = 20.36;
    cout << a[0].a << endl;
    cout << (a + 1)->b << endl;
    // dynamic memory allocation
    struct node *c;
    c = (struct node *)malloc(5 * sizeof(struct node));
    c[0].a = 11;
    c->b = 26.79;
    cout << c[0].a << endl;
    cout << c->b << endl;
    cout << endl;
    return 0;
}