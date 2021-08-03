#include <iostream>
using namespace std;

// Defining node for a doubled linked list. ✅
struct node
{
    int data;
    node *next;
    node *prev;
};

// global declaration of the head ✅
node *head = NULL;

// Function to insert element in the linked list in the front.  ✅
void insert_front(int d)
{
    node *ptr = new node();
    ptr->data = d;
    ptr->prev = NULL;
    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
}

// Function to display the content of the linked list. ✅
void display()
{
    if (head == NULL)
    {
        cout << "List is empty. " << endl;
    }
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

// Function to insert a new node after the data of the given node. ✅
void insert_after(int d)
{
    cout << "Enter the data inside the node after which you want"
         << " to enter the node " << endl;
    int value;
    cin >> value;

    node *temp = head;
    // int found = 0;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            node *ptr = new node();
            ptr->data = d;
            ptr->next = temp->next;
            ptr->prev = temp;
            temp->next->prev = ptr;
            temp->next = ptr;
            // found = 1;
            break;
        }
        temp = temp->next;
    }
    // if(found == 1)
    //     cout<<"Element enter was not in the list: "<<endl;
}

// Function to insert a new node before the data of the given node. ✅
void insert_before(int d)
{
    cout << "Enter the data inside the node before which you want"
         << " to enter the node " << endl;
    int value;
    cin >> value;

    node *temp = head;
    // int found = 0;
    while (temp != NULL)
    {
        if (temp->next->data == value)
        {
            node *ptr = new node();
            ptr->data = d;
            ptr->prev = temp;
            ptr->next = temp->next;
            temp->next = ptr;
            temp->next->prev = ptr;
            // found = 1;
            break;
        }
        temp = temp->next;
    }
    // if(found == 1)
    //     cout<<"Element enter was not in the list: "<<endl;
}

// Function to insert a new node at the end of the list. ✅
void insert_end(int d)
{
    node *ptr = new node();
    ptr->next = NULL;
    ptr->data = d;
    if (head == NULL)
    {
        ptr->prev = NULL;
        head = ptr;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        ptr->prev = temp;
        temp->next = ptr;
    }
}

// Function to delete the head of the linked list. ✅
void delete_head()
{
    if (head == NULL)
        cout << "List is empty." << endl;
    else
    {
        node *temp = head->next;
        temp->prev = NULL;
        // Do we have to free up head or we can simply
        // put head = temp;
        // Actually we do not have to free up the space we just
        // have to change the prev address and we are good to go .
        head = temp;
    }
}

// Function to delete the tail of the linked list. ✅
void delete_end()
{
    if (head == NULL)
        cout << "The list is empty." << endl;
    else
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        free(temp->next);
    }
}

// Function to delete a particular node ✅
void delete_node()
{
    if (head == NULL)
        cout << "The list is empty." << endl;
    else
    {
        int value;
        cout << "Enter the value of the node which you want to remove." << endl;
        cin >> value;
        node *temp = head;
        while (temp->next->data != value)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->next->prev = temp;
    }
}

// Function to delete nth node from front -> 😡 segmetation fault. ❌❌❌❌❌❌❌❌❌❌
void delete_nth_node_from_front()
{
    if (head == NULL)
        cout << "The list is empty." << endl;
    else
    {
        int n;
        cout << "Enter the position of the list which you want to remove" << endl;
        cin >> n;
        node *temp = head;
        for (int i = 1; i < n; i++)
        {
            temp = temp->next;
        }
        (temp->prev)->next = temp->next;
        (temp->next)->prev = temp->prev;
    }
}

// Function to print the last value of the list ✅
void print_last()
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "The last element of the list to be deleted : " << temp->data << endl;
}

// Function to delete nth node from last. -> 😡 segmentation fault ❌❌❌❌❌❌❌❌❌❌
void delete_nth_node_from_last()
{
    int n;
    cout << "Enter the value of n." << endl;
    cin >> n;
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->prev;
    }

    cout << "The last element of the list to be deleted : " << temp->data << endl;
}

// Function to find the node ✅
void find_node()
{
    if (head == NULL)
        cout << "List is empty." << endl;
    else
    {
        int value;
        cout << "Enter the value to be searched in the list." << endl;
        cin >> value;
        int found = 0;
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
        if (found == 1)
            cout << "Value found in the list." << endl;
        else
            cout << "Value not found in the list." << endl;
    }
}

// Function to find and print the middle node of the linked list. ✅
void find_middle()
{
    if (head == NULL)
        cout << "List is empty" << endl;
    else
    {
        node *temp = head;
        node *temp2 = head;
        while (temp2 != NULL && temp2->next != NULL)
        {
            temp = temp->next;
            temp2 = temp2->next->next;
        }
        cout << "The middle element of the list is: ";
        cout << " " << temp->data << endl;
    }
}

// Function to transverse the list in forward direction. ✅
void forward_transverse()
{
    if (head == NULL)
        cout << "List is empty." << endl;
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << endl;
    }
}

// Function to trnasverse the list in the backward direction 
// this function is printing only the last term 😡 ❌❌❌❌❌❌❌❌❌❌
void backward_transverse()
{

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " <=> ";
        temp = temp->prev;
    }
}

// The main function where the funcion. ✅
int main()
{
    // insert_front(6);
    insert_front(5);
    insert_front(4);
    insert_front(3);
    insert_front(2);
    insert_front(1);

    // insert_after(6);

    // insert_before(9);

    // delete_end();

    // delete_head();

    // delete_node();
    display();

    delete_nth_node_from_front();

    // find_node();

    // find_middle();

    // delete_nth_node_from_last();

    display();

    // print_last();
    // forward_transverse();

    // backward_transverse();

    return 0;
}