#include <iostream>
using namespace std;
void printArray(int (*p)[2][2], int rs, int cols)
{
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *((p + i)+j) << " ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[2][2] = {{10, 14}, {16, 17}};
    int *p;
    // a store the address of first row
    p = *a;
    //cout<<*(p+1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *((p + i)+j) << " ";
        }
        cout<<endl;
    }
  ///  printArray();
    cout << endl;
    return 0;
}