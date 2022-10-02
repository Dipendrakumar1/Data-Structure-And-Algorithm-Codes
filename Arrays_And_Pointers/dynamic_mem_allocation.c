#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* --> Both malloc() and calloc() functions are used to
      allocate memory dynamically in heap area.
       --> After the creation of memory malloc and calloc it will
       return a address as void pointer (it is also called generic pointer).
       Generic pointer means that further this pointer can converted into some
       other type.
       --> malloc() creates a whole block of memory at a one time.But in the case
       of calloc(), it will allocated memory blockwise corresponding to give data
       type.
       --> In the case of malloc(),at the time of memory allocation memory initialize
       with some garbage values until we assign the desired value.But in the case of
       of calloc(), it will initially initialize with 0s.

       --> In case of malloc(), chances of memory waste because it will allocated whole
       memory at once but in case of calloc() it will not.

     */
    int *a, *b;
    // Here,n is sizeof an memory to be allocated
    int n;
    n = 4;
    // Here, we are not doing typecasting because many of the compiler
    // implicitly converted.
    // int a=(int*)malloc(n*sizeof(int)); --> with typecasting
    //   16byte memory allocated in heap area.
    a = malloc(n * sizeof(int));
    // Here, we are using concept of poiter to manipulate the memory
    // it is become quite easy while using poiter.
    *(a + 0) = 10;
    *(a + 1) = 15;
    *(a + 2) = 17;
    *(a + 3) = 19;
    for (int i = 0; i < n; i++)
        printf("%d  ", *(a + i));
    printf("\n");
    // Here, we are going to write in the form of array.
    a[0] = 20;
    a[1] = 30;
    a[2] = 40;
    a[3] = 50;
    for (int i = 0; i < 4; i++)
        printf("%d ", a[i]);
    printf("\n");
    // Here ,it will allocate memory blockwise corresponding to n and int.
    b = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        printf("%d  ", *(b + i));
    printf("\n");
    return 0;
}