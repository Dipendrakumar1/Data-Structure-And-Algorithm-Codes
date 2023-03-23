#include<bits/stdc++.h>
int factCal(int n)
{
// work for base terminating conditon
  if(n==0)
  return 1;
  return n*factCal(n-1);
}
using namespace std;
int main()
{
 int n;
 cout<<"Enter Number:->  ";
 cin>>n;
 cout<<"The Factorial of "<<n<<"! :-> "<<factCal(n)<<endl;

return 0;
}