#include <stdio.h>

#define SIZE 10

int main()
{
    int hashTable[SIZE];
    int n, key, index;
    int i, j;

    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter key: ");
        scanf("%d", &key);

        index = key % SIZE;

        j = 0;

        while (hashTable[(index + j) % SIZE] != -1)
        {
            j++;

            if (j == SIZE)
            {
                printf("Hash table is full\n");
                break;
            }
        }

        if (j < SIZE)
            hashTable[(index + j) % SIZE] = key;
    }

    printf("\nHash Table:\n");

    for (i = 0; i < SIZE; i++)
        printf("[%d] = %d\n", i, hashTable[i]);

    return 0;
}