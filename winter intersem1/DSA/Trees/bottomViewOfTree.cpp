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

vector<int> topview(node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    map<int, int> topnodeview;
    queue<pair<node *, int>> q;

    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<node *, int> temp = q.front();
        q.pop();
        node *firstnode = temp.first;
        int hd = temp.second;
        topnodeview[hd] = firstnode->data;  //kust this is the difference from topview tree.
        if (firstnode->left)
        {
            q.push(make_pair(firstnode->left, hd - 1));
        }
        if (firstnode->right)
        {
            q.push(make_pair(firstnode->right, hd + 1));
        }
    }
    for (auto i : topnodeview)
    {
        ans.push_back(i.second);
    }
    return ans;
}

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    vector<int> ans = topview(root);
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