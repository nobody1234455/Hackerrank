#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *insert(Node *root, int value)
{
    if (root == NULL)
    {
        Node *new_node;
        new_node = malloc(sizeof(Node));
        new_node->data = value;
        new_node->left = NULL;
        new_node->right = NULL;

        return new_node;
    }
    else
    {
        if (value < root->data)
            root->left = insert(root->left, value);
        else
        {
            root->right = insert(root->right, value);
        }
    }
}

void printTree(Node *root)
{
    if (root != NULL)
    {
        printTree(root->left);
        printf("%d ", root->data);
        printTree(root->right);
    }
}

int main()
{
    int x, n;
    //scanf("%d", &n);
    n = 5;
    int arr[5] = {3, 2, 1, 5, 4};
    Node *t = NULL;
    for (int i = 0; i < n; i++)
    {
        //scanf("%d", x);
        t = insert(t, arr[i]);
    }
    printTree(t);
    return 0;
}