#include <stdio.h>
void printArray(int *p)
{
    for(int i=0;i<5;i++)
     printf("%d ",*(p+i));
}
int main()
{
    int a[5] = {5, 9, 8, 7, 2};
    int *p;
    // name of the array stored address of first element 
    // a=&a[0]  is equal
    p=a;
    printArray(p); // -->passing array by address
    printf("\n");
    return 0;
}