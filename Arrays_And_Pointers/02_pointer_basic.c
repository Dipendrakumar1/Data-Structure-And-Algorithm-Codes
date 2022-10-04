#include <stdio.h>
int main()
{
    int a = 9;
    int *p;
    // pointer is s user-defined data type
    // p is a pointer variable of integer type
    // pointer variable store address of another normal variable or
    // another pointer variable
    // a is a normal variable
    p = &a;
    // pointer p is storing the address of variable a
    // if we are creating pointer variable for any variable then data
    // type must be same.
    // we can also create a pointer of a pointer.
    int *(*p1);
    p1 = &p;
    printf("%d\n", *(*p1));
    printf("%d", *p);
    printf("\n");
    return 0;
}