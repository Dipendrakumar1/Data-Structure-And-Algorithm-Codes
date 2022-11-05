#include<bits/stdc++.h>
using namespace std;
void traverse(int *arr,int n)
{
    cout<<"[ ";
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<" ]"<<endl;
    
}
void reverseArray(int *arr,int n)
{
     int t;
     int j=n-1;
     for (int i = 0; i < n/2; i++)
     {
        t=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=t;
        --j;
     }
     cout<<"[ ";
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<" ]"<<endl;
      
}
int searching(int *arr,int n,int data)
{
     for(int i=0;i<n;i++)
     {
       if(*(arr+i)==data)
       {
         return i+1;
       }
     }
     cout<<"\nData Not Found.\n"<<endl;
     return -999;
}
void deletePos(int *arr,int n,int pos)
{
   int t;
   if(pos>n)
   {
      cout<<"Deletion Not Possible.\n"<<endl;
   }
   else
   {
      for (int i = pos-1; i < n-1; i++)
      {
         arr[i]=arr[i+1];

      }
      
      
   }
    
}
int main()
{
 cout<<"Enter Size of an array: ";
 int n;
 cin>>n;
 int *arr=(int *)malloc(sizeof(int)*n);
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 int x=1;
 while(x==1)
 {
 cout<<"\n====Choice Menu====\n"<<endl;
 cout<<"1.For Traversal"<<endl;
 cout<<"2.For Reversing"<<endl;
 cout<<"3.For Searching"<<endl;
 cout<<"4.For Deleting By Position"<<endl;
 cout<<"5.For Copying"<<endl;
 cout<<"6.For Insertion"<<endl;
 cout<<"7.Exit"<<endl;
 cout<<"Enter Your Choice: ";
 int choice;
 cin>>choice;
 switch (choice)
 {
 case 1:
    traverse(arr,n);
    break;
 case 2:
    reverseArray(arr,n);
    break;
 case 3:
    int data;
    cout<<"Enter Element To Be Search: ";
    cin>>data;
    cout<<"Elements Present At Position: "<<searching(arr,n,data)<<endl;
    break;
case 4:
    cout<<"Enter Position To Be Delete: ";
    int pos;
    cin>>pos;
    deletePos(arr,n,pos);
    break;
 default:
    break;
 }
 cout<<"Do You Want To Continue(y=1/n=0): ";
 cin>>x;
 }
 cout<<"\n====HAPPY CODING!=====\n"<<endl;
return 0;
}
