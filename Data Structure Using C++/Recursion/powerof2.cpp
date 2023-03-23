#include<bits/stdc++.h>
using namespace std;
int calcu(int n)
{
    if(n==0)
    return 1;
    return 2*calcu(n-1);
}
int main()
{
 int n;
 cout<<"Enter Value for n:->  ";
 cin>>n;
 cout<<"Result:-> "<<calcu(n)<<endl;
return 0;
}