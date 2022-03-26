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

pair<int, int> maxSumAdj(node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = maxSumAdj(root->left);
    pair<int, int> right = maxSumAdj(root->right);

    pair<int, int> res;
    res.first = root->data + right.second, left.second;
    res.second = max(left.first, left.second) + max(right.first, right.second);

    return res;
}

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    int k = 3;
    cout << "The max sum is " << max(maxSumAdj(root).first, maxSumAdj(root).second);
    return 0;
}
// 1 2 3 -1 -1 4 -1 -1 5 -1 -1

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 7 12 -1 -1 13 -1 -1

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN