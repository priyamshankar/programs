#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

void enterData(node *&root)
{
    int data;
    cout << "\nEnter the data to be entered: ";
    cin >> data;
    if (data == -1)
    {
        return;
    }
    root = new node(data);
    enterData(root->left);
    enterData(root->right);
}

void inorderTraversal(node *&root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right == NULL && root->left == NULL)
    {
        count++;
    }
    inorderTraversal(root->left, count);
    // cout << root->data << " ";
    inorderTraversal(root->right, count);
}

int main()
{
    node *root = NULL;
    enterData(root);
    int count = 0;
    inorderTraversal(root, count);
    cout << count;
    return 0;
}

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN