#include<bits/stdc++.h>
using namespace std;
struct stu{
    int data;
    struct stu *next;
};
struct stu * memoryAllo()
{
    struct stu *cur;
    cur=(struct stu *)malloc(sizeof(struct stu));
    return cur;
}
void createNode(struct stu **h,int data)
{
  struct stu *cur=memoryAllo();
  cur->data=data;
  cout<<"Val= "<<cur->data<<endl;
}
int main()
{
struct stu *head=NULL;
createNode(&head,14);
return 0;
}