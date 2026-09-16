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

int height(struct Node* root)
{
    int leftHeight, rightHeight;

    if (root == NULL)
        return 0;

    leftHeight = height(root->left);
    rightHeight = height(root->right);

    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

int main()
{
    struct Node* root;

    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Height of tree = %d", height(root));

    return 0;
}