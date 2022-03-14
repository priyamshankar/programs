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
    cout << "Enter the Data\n";
    node *root = NULL;
    putData(root);

    display(root);

    return 0;
}