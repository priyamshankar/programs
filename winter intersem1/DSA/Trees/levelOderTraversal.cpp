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

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    return 0;
}