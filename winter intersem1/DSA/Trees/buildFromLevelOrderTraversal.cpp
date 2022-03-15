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

void enterData(node *&root)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return;
    }

    root = new node(data);
    enterData(root->left);
    enterData(root->right);
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    node *temp;
    while (!q.empty())
    {
        temp = q.front();
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
            cout << temp->data;
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
    cout << "enter the data";
    node *root = NULL;
    enterData(root);
    levelOrderTraversal(root);
    return 0;
}