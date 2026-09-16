#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createNode(int data)
{
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insert(struct Node* hashTable[], int key)
{
    int index;
    struct Node* newNode;

    index = key % SIZE;

    newNode = createNode(key);

    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

void display(struct Node* hashTable[])
{
    int i;
    struct Node* temp;

    for (i = 0; i < SIZE; i++)
    {
        printf("[%d] -> ", i);

        temp = hashTable[i];

        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main()
{
    struct Node* hashTable[SIZE];
    int n, key, i;

    for (i = 0; i < SIZE; i++)
        hashTable[i] = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter key: ");
        scanf("%d", &key);

        insert(hashTable, key);
    }

    printf("\nHash Table using Separate Chaining:\n");

    display(hashTable);

    return 0;
}