#include<bits/stdc++.h>
using namespace std;
//using adjacency matrix
void createGraph(int vertex,int edge)
{
   cout<<"\n==== Enter Graph Data ====\n ";
   int **matrix=new int *[vertex];
   for(int i=0;i<vertex;i++)
   {
      matrix[i]=new int [vertex];
   }
   for(int i=0;i<vertex;i++)
   {
     for(int j=0;j<vertex;j++)
      {
        cout<<"Is "<<i<<" To "<<j<<" (y=1/n=0):-> ";
         cin>>matrix[i][j];
       }
   }
   // printing graph
   for(int i=0;i<vertex;i++)
   {
     for(int j=0;j<vertex;j++)
      {

         cout<<matrix[i][j]<<"  ";
       }
       cout<<endl;
   }
   for(int i=0;i<vertex;i++)
   {
     for(int j=0;j<vertex;j++)
      {

        if(matrix[i][j]==1)
        {
            cout<<i<<" and "<<j<<" are connected."<<endl;
        }
       }
       cout<<endl;
   }
}
using namespace std;
int main()
{
 cout<<"Enter Numbers Of Vertices:->  ";
 int ver,edg;
cin>>ver;
cout<<"Enter Numbers Of Edges:-> ";
cin>>edg;
createGraph(ver,edg);
return 0;
}