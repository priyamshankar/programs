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

node *kthAncestor(node *root, int n1, int &k)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (k == 0)
    {
        return root;
    }
    if (root->data == n1)
    {
        return root;
    }
    node *leftans = kthAncestor(root->left, n1, k);
    node *rightans = kthAncestor(root->right, n1, k);

    if (rightans == NULL && leftans == NULL)
    {
        return NULL;
    }
    else if (rightans == NULL && leftans != NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT8_MAX;
            return root;
        }
        return leftans;
    }
    else if (leftans == NULL && rightans != NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT8_MAX;
            return root;
        }
        return rightans;
    }
    else
    {
        cout << "error thrown in the conditions";
    }
    return NULL;
    // return root;
}

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    int k = 3;
    cout << "The " << k << "th ancestor is " << kthAncestor(root, 10, k)->data;
    return 0;
}
// 1 2 3 -1 -1 4 -1 -1 5 -1 -1

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 7 12 -1 -1 13 -1 -1

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN