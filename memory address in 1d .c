#include <stdio.h>

int main()
{
    int a[10];
    int i;
    int base, address;

    printf("Enter base address of array: ");
    scanf("%d", &base);

    printf("Enter index of element: ");
    scanf("%d", &i);

    address = base + (i * sizeof(int));

    printf("Memory address of A[%d] = %d", i, address);

    return 0;
}