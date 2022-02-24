#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};    

void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
    head->prev = temp;
}

void insertAtTail(node *&head, int data)
{
    node *temp = head;
    node *newnode = new node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void insertAtPosition(node *&head, int pos, int data)
{
    node *newnode = new node(data);
    node *temp = head;
    int count = 1;
    while (temp->next != NULL && count != pos - 1)
    {
        count++;
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next=newnode;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << endl
             << temp->data;
        temp = temp->next;
    }
}

int main()
{
    node *head;
    insertAtHead(head, 56);
    // display(head);
    insertAtHead(head, 43);
    insertAtTail(head, 99);
    insertAtTail(head, 94);

    insertAtHead(head, 43);
    insertAtHead(head, 43);

    display(head);
    cout << endl
         << "&&&&&&&&^^^^^^^%%%%%%%%**********";
    insertAtPosition(head,5,199);
    display(head);
    return 0;
}