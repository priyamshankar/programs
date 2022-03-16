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

bool isSameTrees(node *&root1, node *&root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL && root2 != NULL)
    {
        return false;
    }
    if (root2 == NULL && root1 != NULL)
    {
        return false;
    }
    bool left = isSameTrees(root1->left, root2->left);
    bool right = isSameTrees(root1->right, root2->right);

    bool value = (root1->data == root2->data);

    if (left && right && value)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    node *root1 = NULL;
    node *root2 = NULL;
    enterData(root1);
    cout << "\n\nenter the data of other tree";
    enterData(root2);

    cout << "are they the same trees or not:" << isSameTrees(root1, root2);

    return 0;
}

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN