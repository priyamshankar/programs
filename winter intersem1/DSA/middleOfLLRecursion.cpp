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

int midLl(node *&count1, node *&count2)
{
    if (count2 == NULL || count2->next == NULL)
    {
        // return;
        // count2->next->next;
        return 0;
    }
    cout << count1->data << " " ;
    // << count2->data;
    midLl(count1->next, count2->next->next);
    // return count1->data;
    return count1->data;
}

int main()
{
    node *head = NULL;
    node *temp = NULL;

    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // node node2=new node(23);
    // insertatHead(8, head);
    insertatHead(7, head);
    insertatHead(6, head);

    insertatHead(5, head);
    insertatHead(4, head);
    // insertatTail(99, head);
    insertatHead(3, head);
    insertatHead(2, head);
    insertatHead(1, head);

    // displayLl(head);

    // deleting(head, 3);

    // displayLl(head);

    // deleting(head, 0);
    // int count1 = 0;
    node *count1 = head;
    node *count2 = head;
    displayLl(head);
    cout << midLl(count1, count2);

    return 0;
}