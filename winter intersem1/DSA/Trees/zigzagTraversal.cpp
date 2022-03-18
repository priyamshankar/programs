#include <iostream>
#include <vector>
#include <queue>

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

vector<int> zigzag(node *&root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }
    queue<node *> q;
    q.push(root);

    bool leftToRight = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            node *frontNode = q.front();
            q.pop();
            // cout << frontNode->data << " ";
            int index = leftToRight ? i : size - i - 1;
            // int index = i;
            ans[index] = frontNode->data;
            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }
        leftToRight = !leftToRight;
        for (auto i : ans)
        {
            result.push_back(i);
        }
    }
    return result;
}

void levelOrderTraversal(node *&root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    enterData(root);

    vector<int> zig = zigzag(root);
    for (auto &i : zig)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "normal level order traversal";

    levelOrderTraversal(root);
    return 0;
}

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN

// 1 2 3 -1 -1 4 -1 -1 5 -1 -1