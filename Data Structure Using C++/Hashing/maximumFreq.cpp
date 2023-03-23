#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr={1,2,3,1,2,3,3};
 unordered_map<int,int> m;
  for(int i=0;i<arr.size();i++)
  {
    m[arr[i]]++;
  }
  for(auto i:m)
  {
    cout<<i.first<<" --> "<<i.second<<endl;
  }
return 0;
}