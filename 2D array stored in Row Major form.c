#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;
    int base, address;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter row index: ");
    scanf("%d", &i);

    printf("Enter column index: ");
    scanf("%d", &j);

    address = base + ((i * cols + j) * sizeof(int));

    printf("Effective address of A[%d][%d] = %d",
           i, j, address);

    return 0;
}