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

void reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *current = head;
    node *prev = NULL;
    node *forward = NULL;
    // while (current != NULL)
    // {
    //     forward = current->next;
    //     current->next = prev;
    //     prev = current;
    //     current = forward;
    // }
    // head=prev;
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
    insertatHead(35, head);
    insertatHead(34, head);

    // displayLl(head);

    // deleting(head, 3);

    // displayLl(head);

    // deleting(head, 0);

    displayLl(head);

    cout << endl
         << "after reversing the ll" << endl;
    reverse(head);
    displayLl(head);

    return 0;
}