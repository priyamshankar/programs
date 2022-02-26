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

node *displayLl(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return head;
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

node *returnMid(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL && fast != NULL)
    {
        if (fast->next->next == NULL)
        {
            return slow;
        }
        slow = slow->next;
        fast = fast->next;
        fast = fast->next;
    }
    return slow;
}

node *merge(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *ans = new node(-1);
    node *temp = ans;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            temp->next = head1;
            temp = head1;
            head1 = head1->next;
        }
        else
        {
            temp->next = head2;
            temp = head2;
            head2 = head2->next;
        }
    }
    return head1;
}

node *divideLl(node *&head)
{
    if (head->next == NULL)
    {
        return 0;
    }
    node *mid = returnMid(head);
    // left part
    divideLl(head);
    divideLl(mid->next);
    if (mid->next->data >= head->data)
    {
        merge(head, mid->next);
    }
    else
    {

        merge(mid->next, head);
    }
    return head;
}

int main()
{
    node *head = NULL;

    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // node node2=new node(23);
    insertatHead(4, head);
    insertatHead(55, head);
    insertatHead(76, head);
    insertatHead(0, head);
    insertatHead(1, head);
    insertatHead(2, head);
    insertatHead(9, head);
    insertatHead(7, head);
    insertatHead(24, head);
    insertatHead(9, head);
    // insertatHead(7, head);
    node *rightHead = NULL;
    // cout << endl
    //  << "end of the line" << returnMid(head)->data;

    // displayLl(divideLl(head));
    divideLl(head);
    displayLl(head);
    // cout<<divideLl(head)->next->data;
    return 0;
}