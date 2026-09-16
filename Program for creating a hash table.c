#include <stdio.h>

#define SIZE 10

int main()
{
    int hashTable[SIZE];
    int n, key, index;
    int i;

    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter key: ");
        scanf("%d", &key);

        index = key % SIZE;

        hashTable[index] = key;
    }

    printf("\nHash Table:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("[%d] = %d\n", i, hashTable[i]);
    }

    return 0;
}