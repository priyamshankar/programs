#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->right = this->left = NULL;
        this->data = data;
    }
};

void putData(node *&root)
{
    int data;
    cin >> data;
    // root->data = data;
    root = new node(data);
    if (data == -1)
    {
        return;
    }

    cout << "put the left data: " << endl;
    putData(root->left);
    cout << "put data in right node" << endl;
    putData(root->right);
    return;
}

void display(node *&root)
{
    if (root->data == -1)
    {
        return;
    }
    cout << " -> " << root->data;
    display(root->left);
    display(root->right);
}

void inorder(node *&root)
{
    if (root->data == -1)
    {
        return;
    }
    inorder(root->left);
    cout << " -> " << root->data;
    inorder(root->right);
    return;
}

void postOrder(node *&root)
{
    if (root->data == -1)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << " -> " << root->data;
    return;
}



int main()
{
    node *root = NULL;
    putData(root);
    display(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postOrder(root);
    return 0;
    // 1 2 -1 -1 3 4 5 -1 -1 -1 6 -1 -1
}