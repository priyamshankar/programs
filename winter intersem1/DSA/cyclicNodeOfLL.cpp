#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertatHead(int data, node *&head)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertatTail(int data, node *&head)
{
    node *n = new node(data);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertatPos(int data, node *&head, int pos)
{
    node *n = new node(data);
    node *temp = head;
    int count = 1;
    while (temp->next != NULL && count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;
}

void displayLl(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void deleting(node *&head, int pos)
{
    node *temp = head;
    node *temp2 = head;
    int count = 1;
    if (pos == 0)
    {
        temp = temp->next;
        // temp2=temp->next;
        head = temp;
        cout << "the data of node " << pos << " is " << temp2->data << " deleted";
        delete temp2;
        return;
    }
    while (temp->next != NULL && count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    temp2 = temp->next;
    cout << "the data of node " << pos << " is " << temp2->data << " deleted";
    temp->next = temp2->next;
    delete temp2;
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

int loopCheck(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            // cout << slow->data << endl;
            // cout << fast->data << endl;

            cout << endl
                 << "loop found" << endl;
            break;
        }
    }
    slow = head;
    int count = 1;
    while (fast != NULL && slow != NULL)
    {
        count++;
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
        {
            // fast = fast->next;
        }
        if (slow == fast)
        {
            cout << "the count is " << count;
            break;
        }
    }
    // cout << "loop not found" << endl;
    return 0;
}

void createLoop(node *&head)
{
    node *temp1 = head;
    node *temp2 = head;
    temp1 = temp1->next->next->next;
    // temp2=temp1;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    cout << temp2->next->data << endl;
}

int main()
{
    node *head = NULL;

    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // node node2=new node(23);
    insertatHead(337, head);
    insertatHead(336, head);
    insertatTail(99, head);
    insertatTail(98, head);
    insertatTail(97, head);

    insertatHead(35, head);
    insertatHead(34, head);
    insertatHead(38, head);
    insertatHead(39, head);
    // insertatHead(30, head);
    insertatHead(31, head);
    insertatHead(32, head);

    // displayLl(head);

    // deleting(head, 3);

    // displayLl(head);

    // deleting(head, 0);

    displayLl(head);
    cout << endl
         << "after making the loop" << endl;

    createLoop(head);

    loopCheck(head);

    return 0;
}