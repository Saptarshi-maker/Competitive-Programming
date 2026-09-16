#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data)
{
    struct Node* newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int countNodes(struct Node* root)
{
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}

int countLeafNodes(struct Node* root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeafNodes(root->left)
         + countLeafNodes(root->right);
}

int countInternalNodes(struct Node* root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return 1 + countInternalNodes(root->left)
             + countInternalNodes(root->right);
}

int main()
{
    struct Node* root;

    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Total nodes = %d\n", countNodes(root));
    printf("Internal nodes = %d\n", countInternalNodes(root));
    printf("Leaf nodes = %d\n", countLeafNodes(root));

    return 0;
}