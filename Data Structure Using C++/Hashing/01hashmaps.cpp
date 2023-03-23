#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<string,int> m;
// insertion
//1
 pair<string,int> p=make_pair("dipendra",4);
m.insert(p);
//2
pair<string,int> pair2("yadav",2);
m.insert(pair2);
//3
m["kumar"]=11;
// search
cout<<m["kumar"]<<endl;
cout<<m.at("dipendra")<<endl;
cout<<m["unknown"]<<endl;
cout<<m.size()<<endl;
// check presence
cout<<m.count("dipendra")<<endl;
// erase
m.erase("kumar");
cout<<m.size()<<endl;
for(auto i:m)
{
    cout<<i.first<<" --> "<<i.second<<endl;
}
// iterator
unordered_map<string,int>:: iterator it=m.begin();
for(;it!=m.end();it++)
{
    cout<<(*it).first<<" --> "<<(*it).second<<endl;
}
return 0;
}