#include <iostream>
#include <queue>

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

void leftTreeTraversal(node *&root, vector<int> &ans)
{
    if ((root == NULL) || (root->right == NULL && root->left == NULL))
    {
        return;
    }

    ans.push_back(root->data);

    if (root->left)
    {
        leftTreeTraversal(root->left, ans);
    }
    else
    {
        leftTreeTraversal(root->right, ans);
    }
}

void leafTraversal(node *&root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
}

void traverseRight(node *&root, vector<int> &ans)
{
    if ((root == NULL) || (root->right == NULL && root->left == NULL))
    {
        return;
    }

    if (root->right)
    {
        traverseRight(root->right, ans);
    }
    else
    {
        traverseRight(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> borderTraversal(node *&root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    leftTreeTraversal(root, ans);
    leafTraversal(root, ans);
    traverseRight(root, ans);
    return ans;
}

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    vector<int> ans = borderTraversal(root);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
// 1 2 3 -1 -1 4 -1 -1 5 -1 -1

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 7 12 -1 -1 13 -1 -1

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN