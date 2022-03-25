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

vector<int> left(node *&root, vector<int> &ans)
{
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return ans;
    }

    ans.push_back(root->data);
    if (root->left != NULL)
    {
        left(root->left, ans);
    }
    else
    {
        left(root->right, ans);
    }
    return ans;
}

int main()
{
    vector<int> ands;
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    vector<int> ans = left(root, ands);
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