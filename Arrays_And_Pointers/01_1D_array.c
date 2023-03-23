#include <stdio.h>
#include <stdlib.h>
void printArray(int *a, int n)
{
    printf("Array: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("]");
}
int main()
{
    int *a;
    int n;
    printf("Enter the size of an Array: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    if (a != NULL)
    {
        printf("Memory allocated successfully.\n");
    }
    else
    {
        printf("Memory allocating failed.\n");
    }
    printf("Enter %d Elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", (a + i));
    printArray(a, n);
    free(a);
    printf("\nSuccessfully released memory.\n");
    printArray(a, n);
    printf("\n");
    return 0;
}