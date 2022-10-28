#include <iostream>
using namespace std;
void printArray(int *p)
{
    for (int i = 0; i < 5; i++)
        cout << *(p + i) << " ";
}
int main()
{
    int a[6] = {10, 14, 18, 22, 26,28};
    printArray(a);
    cout << endl;
    return 0;
}