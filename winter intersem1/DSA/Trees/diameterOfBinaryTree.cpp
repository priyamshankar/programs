
// didn't get this code honestly

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

int height(node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans;
    int left = height(root->left);
    int right = height(root->right);
    ans = max(left, right) + 1;
    return ans;
}

int diameter(node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + 1 + height(root->right);
    int ans = max(op1, max(op2, op3));
    return ans;
}

int main()
{
    node *root = NULL;
    enterData(root);
    // cout << "height of the tree is: " << height(root);
    cout << diameter(root);
    return 0;
}

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN