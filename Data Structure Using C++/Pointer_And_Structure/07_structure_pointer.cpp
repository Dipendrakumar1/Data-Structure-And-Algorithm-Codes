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
  struct node p={2,9.6};
  struct node *q;
  q=&p;
  cout<<(*q).a<<endl;  
  cout<<q->b<<endl;  
    
    cout<<endl;
    return 0;
}