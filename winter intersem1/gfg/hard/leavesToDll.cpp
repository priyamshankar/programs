//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

void inOrder(Node *root)
{
    if (!root)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// return the head of the DLL and remove those node from the tree as well.

// 1 2 3 4 5 N N tc's

int nodes(Node *root, Node *&dll)
{
    if(root==NULL)return 0;
    if (root->left == NULL && root->right == NULL)
    {
        Node *tempDll = new Node(root->data);
        if (dll == NULL)
        {
            dll = tempDll;
            cout << "testcasedll\n";
        }
        else
        {
            tempDll->left = dll;
            dll->right = tempDll;
            dll = dll->right;
            cout << "testcasedrr\n";
            // dll=tempDll;
        }
        return 1;
    }

    if (nodes(root->left, dll))
        root->left = NULL;
    if (nodes(root->right, dll))
        root->right = NULL;

    return 0;
}

Node *convertToDLL(Node *root)
{
    // add code here.
    Node *dll = NULL;
    nodes(root, dll);
    while (dll->left != NULL)
        dll = dll->left;

    return dll;
}

//{ Driver Code Starts.

int main()
{

    string treeString;
    getline(cin, treeString);
    Node *root = buildTree(treeString);
    Node *head = convertToDLL(root);
    inOrder(root);
    cout << "\n";
    Node *curr = head, *last = head;
    while (curr)
    {
        cout << curr->data << " ";
        last = curr;
        curr = curr->right;
    }
    cout << "\n";
    curr = last;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->left;
    }
    cout << "\n";

    return 0;
}

// } Driver Code Ends