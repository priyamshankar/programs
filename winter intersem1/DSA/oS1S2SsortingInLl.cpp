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
    if (head == NULL)
    {
        insertatHead(data, head);
        return;
    }
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
//************************************************//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //
//**********************************************//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
//********************************************//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

void sorting(node *&head, node *&zeroHead, node *&oneHead, node *&twoHead)
{
    node *temp = head;
    int no;
    while (temp->next != NULL && temp != NULL)
    {
        no = temp->data;
        if (no == 0)
        {
            insertatTail(0, zeroHead);
        }
        else if (no == 1)
        {
            insertatTail(1, oneHead);
        }
        else if (no == 2)
        {
            insertatTail(2, twoHead);
        }
        temp = temp->next;
    }
}

void merge(node *&head, node *&zeroHead, node *&oneHead, node *&twoHead)
{
    node *temp = zeroHead;
    node *zerotail;
    node *onetail;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    zerotail = temp;
    if (oneHead != NULL)
    {
        zerotail->next = oneHead;
    }
    if (oneHead != NULL)
    {
        temp = oneHead;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        onetail = temp;
    }
    if (twoHead != NULL)
    {
        onetail->next = twoHead;
    }
}

int main()
{
    node *head = NULL;

    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // node node2=new node(23);
    insertatHead(0, head);
    insertatHead(1, head);
    insertatHead(0, head);
    insertatHead(2, head);
    insertatHead(2, head);
    insertatHead(2, head);
    insertatHead(1, head);
    insertatHead(1, head);
    insertatHead(2, head);
    insertatHead(0, head);
    insertatHead(2, head);

    // displayLl(head);

    // deleting(head, 3);

    // displayLl(head);

    // deleting(head, 0);

    // displayLl(head);

    node *zeroHead = NULL;
    node *oneHead = NULL;
    node *twoHead = NULL;

    sorting(head, zeroHead, oneHead, twoHead);
    merge(head, zeroHead, oneHead, twoHead);

    displayLl(zeroHead);
    // displayLl(oneHead);
    // displayLl(twoHead);

    return 0;
}