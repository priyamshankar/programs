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
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildFromLevelOrderTraversal(node *root)
{
    queue<node *> q;
    cout << "Enter the data of the root:";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "\nenter the left element " << temp->data;
        int leftEl;
        cin >> leftEl;
        if (leftEl != -1)
        {
            temp->left = new node(leftEl);
            q.push(temp->left);
        }
        cout << "\nenter the right element of " << temp->data;
        int rightEl;
        cin >> rightEl;
        if (rightEl != -1)
        {
            temp->right = new node(rightEl);
            q.push(temp->right);
        }
    }
}

node *display(node *&root)
{
    node *temp = root;
    if (temp->data == -1)
    {
        return NULL;
    }
    cout<<temp->data<<" ";
    cout<<"\nLeft of the data";
    display(temp->left);
    cout<<"\nRight of the data";
    display(temp->right);
    return root;
}

int main()
{
    // cout << "enter the data";
    node *root = NULL;
    // enterData(root);
    buildFromLevelOrderTraversal(root);
    levelOrderTraversal(root);
    // display(root);
    return 0;
}

//1 2 5 3 4 -1 -1 -1 -1 -1 -1

//1 2 3 -1 -1 4 -1 -1 5 -1 -1