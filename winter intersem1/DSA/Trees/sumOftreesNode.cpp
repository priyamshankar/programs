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

pair<bool, int> sumOfTrees(node *&root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    pair<bool, int> left = sumOfTrees(root->left);
    pair<bool, int> right = sumOfTrees(root->right);

    bool isleftSum = left.first;
    bool isrightSum = right.first;

    int leftSum = left.second;
    int rightSum = right.second;

    bool condn = root->data == (leftSum + rightSum);
    pair<bool, int> ans;
    if (isleftSum && isrightSum && condn)
    {
        ans.first = true;
        ans.second = root->data + leftSum + rightSum;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

int main()
{
    node *root1 = NULL;
    enterData(root1);
    cout << endl;
    cout<<sumOfTrees(root1).first;
    return 0;
}

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN