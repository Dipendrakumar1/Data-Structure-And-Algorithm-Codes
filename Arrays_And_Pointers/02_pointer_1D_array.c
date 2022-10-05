#include <stdio.h>
void printArray(int *p) // --> pointer variable is storing address of first element of array
{
   for(int i=0;i<9;i++)
   printf("%d ",*(p+i));
   printf("\n\n");
}
void print2dArray(int (*p)[4])  // -->whole array divided into 2 parts by using concept of pointer to an array
{
    for (int i = 0; i < 4; i++)  // -->this will print first half elements
        printf("%d ", *(*(p + 0) + i));
    printf("\n");
    for (int i = 0; i < 4; i++)  // -->this will print second half elements
        printf("%d ", *(*(p + 1) + i));\
    printf("\n");
}
void print3dArray(int (*p)[3])  // -->whole array divided into 3 parts by using concept of pointer to an array
{
    for (int i = 0; i < 3; i++)  // -->this will print first half elements
        printf("%d ", *(*(p + 0) + i));
    printf("\n");
    for (int i = 0; i < 3; i++)  // -->this will print second half elements
        printf("%d ", *(*(p + 1) + i));
        printf("\n");
    for (int i = 0; i < 3; i++)  // -->this will print third remain  elements
        printf("%d ", *(*(p + 2) + i));
}
int main()
{
    int a[9] = {10, 11, 12, 13, 14, 15, 16, 17,18};
    
    printArray(a); // -->passing the address of first element
    printf("\n===This function will divide 1D array into 2 parts===\n");
    print2dArray((int *)&a);  // -->passing the address of whole array
    printf("\n===This function will divide 1D array into 3 parts===\n");
    print3dArray((int *)&a);  // -->passing the address of whole array
    printf("\n");
    return 0;
}