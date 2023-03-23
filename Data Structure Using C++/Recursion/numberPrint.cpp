#include<bits/stdc++.h>
using namespace std;
void printNum(int n)
{
    if(n==0)
    return ;
    cout<<n<<"  ";
    printNum(n-1);
}
int main()
{
 int n;
 cout<<"Enter Value For n:->  ";
 cin>>n;
 printNum(n);
 cout<<endl;
return 0;
}