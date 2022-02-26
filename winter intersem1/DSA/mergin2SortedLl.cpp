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

void mergeList(node *&head1, node *&head2, node *&temp1, node *&temp2)
{
    if (temp1->next->next == NULL || temp2->next->next == NULL)
    {
        return;
    }
    node *next1 = temp1->next;
    node *next2 = temp2->next;
    if (temp1->data <= temp2->data && next1->data >= temp2->data)
    {
        temp2->next = temp1->next;
        temp1->next = temp2;
        temp1 = temp2;
        temp2 = next2;
    }
    else
    {
        temp1 = next1;
    }
    mergeList(head1, head2, temp1, temp2);
}

int main()
{
    node *head = NULL;

    cout << "linked List 1" << endl;
    insertatHead(17, head);
    insertatHead(10, head);
    insertatHead(8, head);
    insertatHead(7, head);
    insertatHead(5, head);
    insertatHead(3, head);

    cout << "linked List 2" << endl;

    node *head2 = NULL;

    insertatHead(92, head2);
    insertatHead(11, head2);
    insertatHead(9, head2);
    insertatHead(8, head2);
    insertatHead(4, head2);

    node *temp1 = head;
    node *temp2 = head2;
    // displayLl(head2);
    if (head->data >= head2->data)
    {
        mergeList(head2, head, temp2, temp1);
    }
    else
    {
        mergeList(head, head2, temp1, temp2);
    }
    // mergeList(head1, head2);
    displayLl(head);

    return 0;
}