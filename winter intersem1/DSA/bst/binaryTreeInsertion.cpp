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
        data = this->data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertDataFunction(int data, node *&root)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    if (data > root->data)
    {
        insertDataFunction(data, root->right);
    }
    else
    {
        insertDataFunction(data, root->left);
    }
    return root;
}

void insertData(node *&root)
{
    int data;
    cout << "enter the data:";
    while (data != -1)
    {
        cin >> data;
        root = insertDataFunction(data, root); /* condition */
    }
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
    insertData(root);
    levelOrderTraversal(root);
    return 0;
}