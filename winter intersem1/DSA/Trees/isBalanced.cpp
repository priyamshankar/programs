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

bool isBalanced(node *&root)
{
    if (root == NULL)
    {
        return true;
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool diff = height(root->left) - height(root->right) <= 1;
    if (diff)
    {
        return true;
    }
    else
    {
        return false;
    }
}

pair<bool, int> isbalancedFast(node *&root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = isbalancedFast(root->left);
    pair<bool, int> right = isbalancedFast(root->right);

    bool leftans = left.first;
    bool rightans = right.first;

    bool heights = abs(left.second - right.second <= 1);
    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;
    if (heights && leftans && rightans)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

int main()
{
    node *root = NULL;
    enterData(root);
    // cout << "height of the tree is: " << height(root);
    cout << isBalanced(root);
    return 0;
}

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN