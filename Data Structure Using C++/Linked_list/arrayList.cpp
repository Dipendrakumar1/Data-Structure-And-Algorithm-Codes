#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int cnoe=0;
void insert(int *a,int val,int pos)
{
    if(cnoe==MAX)
    {
        cout<<"Insertion Not Possible(Array Is Full)."<<endl;
        return;
     }
     if(pos>=cnoe)
     {
        a[cnoe]=val;
        cnoe++;
     }
     else
     {
        for(int i=cnoe-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=val;
        cnoe++;
     }
     
}
void deletion(int *a,int pos)
{
    if(cnoe==0 || pos>=cnoe)
    {
        cout<<"Not Possible."<<endl;
        return;
    }
    else
    {
          for(int i=pos+1;i<=cnoe-1;i++)
          {
            a[i-1]=a[i];
          }
          cnoe--;
    }
}
void delByValue(int *a, int val)
{
    int i;
    for(i=0;i<=cnoe-1;i++)
    {
        if(val==a[i])
        break;
    }
    if(i==cnoe)
    {
        cout<<"Data Not Found."<<endl;
    }
    else
    {
        for(int j=i+1;i<=cnoe-1;j++)
        {
            a[j-1]=a[j];
        }
        cnoe--;
    }
}
void printArrayList(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
 int a[MAX];
 a[0]=3;
 cnoe++;
 a[1]=6;
 cnoe++;
insert(a,10,3);
printArrayList(a,cnoe);
deletion(a,2); // by position
delByValue(a,6); // by position
printArrayList(a,cnoe);
return 0;
}