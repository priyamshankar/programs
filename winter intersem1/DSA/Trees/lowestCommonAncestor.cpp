#include <iostream>
#include <queue>
#include <map>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void insertData(node *&root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return;
    }
    root = new node(data);
    cout << "enter the data in the left node\n";
    insertData(root->left);
    cout << "enter the data in the right node\n";
    insertData(root->right);
    return;
}

node *lca(node *&root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 or root->data == n2)
    {
        return root;
    }
    node *leftvalue = lca(root->left, n1, n2);
    node *rightvalue = lca(root->right, n1, n2);

    if (leftvalue != NULL && rightvalue != NULL)
    {
        return root;
    }
    if (leftvalue == NULL && rightvalue == NULL)
    {
        return NULL;
    }
    if (leftvalue == NULL && rightvalue != NULL)
    {
        return rightvalue;
    }
    if (rightvalue == NULL && leftvalue != NULL)
    {
        return leftvalue;
    }
    return root;
}

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);

    cout << "The LCA is " << lca(root, 6, 13)->data;
    return 0;
}
// 1 2 3 -1 -1 4 -1 -1 5 -1 -1

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 7 12 -1 -1 13 -1 -1

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN