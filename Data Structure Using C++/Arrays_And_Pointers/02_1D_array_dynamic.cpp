#include <iostream>
using namespace std;
void printArray(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}
int main()
{
    int *a;
    int n;
    cout << "Enter No Of Elements For malloc: ";
    cin >> n;
    // allocates memory
    // malloc creates whole memory at once
    a = (int *)malloc(sizeof(int) * n);
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
        cin >> *(a + i);
    printArray(a, n);
    int *b;
    cout << "Enter No Of Elements For calloc: ";
    int n1;
    cin >> n1;
    // calloc allocated memory blockwise instead of whole memory
    // at a time like malloc
    b = (int *)calloc(n1, sizeof(int));
    printf("Enter Elements: ");
    for (int i = 0; i < n1; i++)
        cin >> *(b + i);
    printArray(b, n1);
    // realloc is used to basically,increase and decrease the size of allocated memory
    int n2;
    cout << "Enter New Size to allocate for calloc: ";
    cin >> n2;
    b = (int *)realloc(b, n2 * sizeof(int));
    for (int i = n1; i < n2; i++)
        cin >> *(b + i);
    printArray(b, n2);
    // free is basically ,used to de-allocates the allocated memory
    free(b);
    printArray(b, n2);
    cout << endl;
    return 0;
}