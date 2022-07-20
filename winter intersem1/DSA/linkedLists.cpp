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

void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&head, int data)
{
    node *temp = new node(data);
    node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void display(node *&head)
{
    node *temp = head;
    cout << "Head -> ";
    while (temp != NULL)
    {
        /* code */
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

void insertAtPos(node *&head, int data, int pos)
{
    node *Data = new node(data);
    node *temp = head;
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }
    int i = 1;
    while (i != pos - 1 && temp->next !=NULL)
    {
        i++;
        temp = temp->next;
    }
    Data->next = temp->next;
    temp->next = Data;
}

void deleteHead(node *&head)
{
    node *temp = head;
    // cout << temp->data;
    // temp = temp->next;
    head = temp->next;
    delete (temp);
}

int main()
{

    node *head = NULL;
    node *temp = head;
    // cout << temp->next->data;
    insertAtHead(head, 100);
    insertAtHead(head, 200);
    insertAtTail(head, 50);
    insertAtHead(head, 300);

    insertAtPos(head, 250, 2);
    // cout << head->data;
    // cout << head->next->data;
    display(head);

    deleteHead(head);

    // display(head);
    return 0;
}