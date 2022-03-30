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

node *insertDataFunction(int data, node *&root)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insertDataFunction(data, root->right);
    }
    else
    {
        root->left = insertDataFunction(data, root->left);
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
        root = insertDataFunction(data, root);
    }
}

bool searchBst(node *&root, int key)
{
    bool ans = 0;
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == key)
    {
        // ans=1;
        return 1;
    }
    if (root->data > key)
    {
        ans = searchBst(root->left, key);
    }
    if (root->data < key)
    {
        ans = searchBst(root->right, key);
    }
    if (ans == 1)
    {
        return ans;
    }
    else
    {
        return 0;
    }
}

int main()
{
    node *root = NULL;
    insertData(root);
    cout << searchBst(root, 25);
    return 0;
}

// 10 8 15 32 16 14 9 7 -1