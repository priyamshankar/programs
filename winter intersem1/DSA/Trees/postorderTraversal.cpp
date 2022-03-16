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

void inorderTraversal(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->right);
    cout << root->data << " ";
    inorderTraversal(root->left);
}

int main()
{
    node *root = NULL;
    enterData(root);
    inorderTraversal(root);
    return 0;
}

// inorder ----- LNR 

//Preorder ----- NLR

//PostOrder ---- LRN