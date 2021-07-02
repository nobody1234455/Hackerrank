#include <iostream>
#include <math.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *attachNode(Node *r, int x)
{
    if (r == NULL)
    {
        Node *new_node;
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = x;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }
    else
    {
        if (r->data > x)
            r->left = attachNode(r->left, x);
        else
            r->right = attachNode(r->right, x);
    }
    return r;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

bool isLeaf(Node *root)
{
    return (root->left == NULL && root->right == NULL) ? true : false;
}

int countLevel(Node *root)
{
    if (root == NULL)
        return -1;
    else if (isLeaf(root))
        return 0;
    return 1 + max(countLevel(root->left), countLevel(root->right));
}

bool isAvl(Node *root)
{
    if (root == NULL)
        return true;
    else
    {
        int a = countLevel(root->left);
        int b = countLevel(root->right);
        if (abs(a - b) > 1)
            return false;
        else
            return true;
    }
}

Node *turnRight(Node *root)
{

    Node *B = root->left;
    Node *D = B->right;

    root->left = D;
    B->right = root;
    return B;
}
Node *turnLeft(Node *root)
{

    Node *B = root->right;
    Node *D = B->left;
    root->right = D;
    B->left = root;
    return B;
}

void updateTree(Node *root)
{
    if (countLevel(root->left) >= countLevel(root->right))
        root = turnRight(root);
    else
        root = turnLeft(root);
}

void printTree(Node *root)
{
    if (root != NULL)
    {
        printTree(root->left);
        cout << root->data << " ";
        printTree(root->right);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    Node *root = NULL;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = attachNode(root, value);
    }
    // printTree(root);
    // cout << countLevel(root);
    // if (isAvl(root))
    //     cout << "true";
    // else
    //     cout << "false";
    // return 0;
    if (!isAvl(root))
        updateTree(root);
    cout << countLevel(root);
}