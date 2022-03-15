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
    root = new node(data);
    if (data == -1)
    {
        return;
    }
    cout << "enter the data in the left node\n";
    insertData(root->left);
    cout << "enter the data in the right node\n";
    insertData(root->right);
    return;
}

void levelOrderTraversal(node *&root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        if (q.front()->data != -1)
        {
            cout << q.front()->data;
        }
        q.pop();
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

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    levelOrderTraversal(root);
    return 0;
}
// 1 2 3 -1 -1 4 -1 -1 5 -1 -1