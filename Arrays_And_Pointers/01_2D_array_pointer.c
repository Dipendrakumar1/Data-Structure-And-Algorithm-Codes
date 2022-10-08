#include <stdio.h>
void printArray(int (*p)[4])
{
  for(int i=0;i<4;i++)
  printf("%d ",*((*p)+i));
  printf("\n");
}
int main()
{
    int a[5][4] = {{12, 13, 14, 15}, {17, 18, 19, 20}, {21, 22, 23, 24}, {25, 26, 27, 28}, {30, 31, 32, 33}};
    printArray(&a);
    // for(int i=0;i<4;i++)
    // printf("%d  ",*(*a+i));
    // printf("\n");
    // for(int i=0;i<4;i++)
    // printf("%d  ",*(*(a+1)+i));
    // printf("\n");
    // for(int i=0;i<4;i++)
    // printf("%d  ",*(*(a+4)+i));
    printf("\n");
    return 0;
}