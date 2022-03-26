#include <iostream>
#include <queue>
#include <map>

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
    if (data == -1)
    {
        return;
    }
    root = new node(data);
    cout << "enter the data in the left node\n";
    insertData(root->left);
    cout << "enter the data in the right node\n";
    insertData(root->right);
    return;
}

void maxheightAndSum(node *root, int &maxsum, int len, int &maxlen, int sum)
{
    if (root == NULL)
    {
        if (len > maxlen)
        {
            maxlen = len;
            maxsum = sum;
        }
        else if (len == maxlen)
        {
            maxsum = max(sum, maxsum);
        }
        return;
    }
    sum = sum + root->data;
    maxheightAndSum(root->left, maxsum, len + 1, maxlen, sum);
    maxheightAndSum(root->right, maxsum, len + 1, maxlen, sum);
}

int maxsum(node *&root)
{
    int maxsum = 0;
    int len = 0;
    int maxlen = 0;
    int sum = 0;
    maxheightAndSum(root, maxsum, len, maxlen, sum);
    return maxsum;
    // return sum;
}

int main()
{
    cout << "enter the data";
    node *root = NULL;
    insertData(root);
    int ans = maxsum(root);
    cout << "the maximum sum is " << ans;
    return 0;
}
// 1 2 3 -1 -1 4 -1 -1 5 -1 -1

// 1 2 4 8 -1 -1 9 -1 -1 5 10 -1 -1 11 -1 -1 3 6 -1 -1 7 12 -1 -1 13 -1 -1

// inorder ----- LNR

// Preorder ----- NLR

// PostOrder ---- LRN