// #include <iostream>

// using namespace std;

// typedef struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// } Node;

// Node *attachNode(Node *r, int x)
// {
//     if (r == NULL)
//     {
//         Node *new_node;
//         new_node = (Node *)malloc(sizeof(Node));
//         new_node->data = x;
//         new_node->left = NULL;
//         new_node->right = NULL;
//         return new_node;
//     }
//     else
//     {
//         if (r->data > x)
//             r->left = attachNode(r->left, x);
//         else
//             r->right = attachNode(r->right, x);
//     }
// }

// void printTree(Node *root)
// {
//     if (root != NULL)
//     {
//         printTree(root->left);
//         cout << root->data << " ";
//         printTree(root->right);
//     }
//     return;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Node *root = NULL;
//     int value;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> value;
//         root = attachNode(root, value);
//     }
//     printTree(root);
// }
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
node *insert(node *t, int x)
{
    if (t == NULL)
    {
        node *temp = new node;
        temp->data = x;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else
    {
        if (x < t->data)
        {
            t->left = insert(t->left, x);
        }
        else
        {
            t->right = insert(t->right, x);
        }
    }
}
void printTree(node *t)
{
    if (t != NULL)
    {
        printTree(t->left);
        cout << t->data << " ";
        printTree(t->right);
    }
}
int main()
{
    int n, x;
    cin >> n;
    node *t = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t = insert(t, x);
    }
    printTree(t);
}