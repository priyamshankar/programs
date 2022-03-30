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

node *putData(node *&root)
{
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data in the left node\n";
    putData(root->left);
    cout << "enter the data in the right node\n";
    putData(root->right);
    return root;
}

node *createParentMapping(node *root, int target, map<node *, node *> &nodeToParent)
{
    node *res = NULL;
    queue<node *> q;
    q.push(root);
    nodeToParent[root] = NULL;
    while (!q.empty())
    {
        node *front = q.front();
        q.pop();
        if (front->data == target)
        {
            res = front;
        }
        if (front->left)
        {
            nodeToParent[front->left] = front;
            q.push(front->left);
        }
        if (front->right)
        {
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int burnTree(node *root, map<node *, node *> nodeToParent)
{
    map<node *, bool> visited;
    visited[root] = 1;
    queue<node *> q;
    q.push(root);
    int ans = 0;
    while (!q.empty())
    {
        int size = q.size();
        bool flag = 0;
        for (int i = 0; i < size; i++)
        {
            node *front = q.front();
            q.pop();
            if (front->left && !visited[front->left])
            {
                q.push(front->left);
                visited[front->left] = 1;
                flag = 1;
            }
            if (front->right && !visited[front->right])
            {
                q.push(front->right);
                visited[front->right]=1;
                flag = 1;
            }
            if (!visited[nodeToParent[front]])
            {
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = 1;
                flag = 1;
            }
        }
        if (flag==1)
        {
            ans++;
        }
    }
    return ans;
}

int minTimeBurn(int target, node *root)
{
    map<node *, node *> nodeToParent;
    node *targetNode = createParentMapping(root, target, nodeToParent);
    int ans = burnTree(targetNode, nodeToParent);
    return ans;
}

int main()
{
    cout << "Enter the Data\n";
    node *root = NULL;
    putData(root);

    cout << minTimeBurn(5, root);

    return 0;
}

// 1 5 3 -1 -1 4 -1 -1 9 -1 -1

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 7 12 -1 -1 13 -1 -1

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN