#include <iostream>
using namespace std;
// representation of nested structure
struct node
{
  int no;
  float b;
  struct data{
    int p;
    int q;
  }; 
  struct data r;  
};
int main()
{
    
    struct node s1;
    s1.b=10;
    s1.r.p=20;
    cout<<s1.b<<endl;
    cout<<s1.r.p<<endl;
    return 0;
}