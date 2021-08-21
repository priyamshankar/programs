#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class queue_list
{

public:
    Node *front;
    Node *rear;
    queue_list() // default constructor. Initializing our linked list pointer
    {
        front = NULL;
        rear = NULL;
    }
    Node *make_node(int val);
    void enqueue();
    void dequeue();
    void display();
    bool isEmpty();
    void show_front();
};

Node *queue_list::make_node(int key)
{
    Node *new_node = new Node;
    new_node->data = key;
    new_node->next = NULL;
    return new_node;
}

void queue_list::display() /* 4 */  // Priyam
{
    Node *temp = front;
    cout << endl;
    cout << "Currently the list is as: " << endl;

    if (front != NULL)
    {
        cout << "[ ";
        cout << "FRONT -> ";
        while (temp != NULL)
        {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << "REAR";
        cout << " ]";
    }
    else
    {
        cout << "EMPTY" << endl;
    }
}

// is full not required

// Peek function has to be done by Priyam

void queue_list::enqueue() /* 1 */   // AAditya
{
    int val;
    cout << "Enter the value you want to insert in the queue: ";
    cin >> val;
    if (front == NULL)
    {
        Node *new_node = make_node(val);
        front = new_node;
        rear = front;
    }
    else
    {
        Node *new_node = make_node(val);
        rear->next = new_node;
        rear = rear->next;
    }
    display();
}

void queue_list::dequeue() /* 2 */ // AAditya
{
    if (front == NULL)
    {
        cout << "Queue is already empty" << endl;
    }
    else
    {
        front = front->next;
    }
    display();
}

bool queue_list::isEmpty() // Priyam
{
    if (front == NULL)
        return true;
    else
        return false;
}

void queue_list::show_front() /* 3 */ // priyam
{
    if (isEmpty())
        cout << "Oops! the Queue is empty" << endl;
    else
        cout << "element at front is: " << front->data << endl;
}

int main()
{
    int choice, nodes, element, position, i;
    queue_list sl;
    cout << endl
         << "Initially queue is empty: " << endl;
    sl.display();
    cout << endl;

    while (1)
    {
        cout << endl
             << "------------------------------------" << endl;
        cout << "|                                  |" << endl
             << "| Operations on doubly linked list |" << endl;
        cout << "|                                  |" << endl
             << "-------------------------------------------------------" << endl;
        cout << "|       1.ENQUEUE                                     |" << endl;
        cout << "|       2.DEQUEUE                                     |" << endl;
        cout << "|       3.Show front element                          |" << endl;
        cout << "|       4.Display                                     |" << endl;
        cout << "|       5.EXIT                                        |" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enqueueing the element: " << endl;
            sl.enqueue();
            cout << endl;
            cout << endl
                 << "---------------------------------------------------------------------------------------------" << endl;
            break;
        case 2:
            cout << "Dequeueing the element: " << endl;
            sl.dequeue();
            cout << endl;
            cout << endl
                 << "---------------------------------------------------------------------------------------------" << endl;
            break;
        case 3:
            cout<<endl;
            sl.show_front();
            cout << endl;
            cout << endl
                 << "---------------------------------------------------------------------------------------------" << endl;
            break;
        case 4:
            cout << "Displaying the queue:" << endl;
            sl.display();
            cout << endl;
            cout << endl
                 << "---------------------------------------------------------------------------------------------" << endl;
            break;
        case 5:
            cout << "Exiting" << endl;
            exit(1); /* 5 */
            break;

        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}