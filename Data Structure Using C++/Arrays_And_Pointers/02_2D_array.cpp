#include <iostream>
using namespace std;
void printArray2(int (*p)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[2][2] = {{10, 14}, {16, 17}};
    int *p;
    // a store the address of first row
    p = *a;
    cout << "\n====Output====\n";
    printArray2(a);
    cout << endl;
    return 0;
}