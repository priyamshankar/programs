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

vector<int> top(node *&root)
{
    vector<int> ans;
    map<int, int> topnodeMap;
    queue<pair<node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<node *, int> temp = q.front();
        q.pop();
        if (topnodeMap.find(temp.second) == topnodeMap.end())
        {
            topnodeMap[temp.second] = temp.first->data;
        }
        if (temp.first->left)
        {
            q.push(make_pair(temp.first->left, temp.second - 1));
        }
        if (temp.first->right)
        {
            q.push(make_pair(temp.first->right, temp.second + 1));
        }
    }
    for (auto i : topnodeMap)
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
    vector<int> ans = top(root);
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