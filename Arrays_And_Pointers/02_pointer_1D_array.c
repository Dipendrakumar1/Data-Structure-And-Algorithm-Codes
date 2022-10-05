#include <stdio.h>
void printArray(int *p) // --> pointer variable is storing address of first element of array
{
   for(int i=0;i<8;i++)
   printf("%d ",*(p+i));
   printf("\n\n");
}
void print2dArray(int (*p)[4])  // -->whole array divided into 2 parts by using concept of pointer to an array
{
    for (int i = 0; i < 4; i++)  // -->this will print first half elements
        printf("%d ", *(*(p + 0) + i));
    printf("\n");
    for (int i = 0; i < 4; i++)  // -->this will print second half elements
        printf("%d ", *(*(p + 1) + i));
}
int main()
{
    int a[8] = {10, 11, 12, 13, 14, 15, 16, 17};
    
    printArray(a); // -->passing the address of first element
    print2dArray((int *)&a);  // -->passing the address of whole array
    printf("\n");
    return 0;
}