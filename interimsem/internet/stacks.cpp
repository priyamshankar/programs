
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *link;
};


struct Node *top;
void push(int data)
{
    struct Node *temp;
    temp = new Node();

    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    
    temp->data = data;
    temp->link = top;
    top = temp;
}

int isEmpty()
{
    return top == NULL;
}
int peek()
{
    if (!isEmpty())
        return top->data;
    
}
void pop()
{
    struct Node *temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

void display()
{
    struct Node *temp;

    
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout <<temp->data << "-> ";
            temp = temp->link;
        }
    }
}

int main()
{
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display the elements"<<endl;
    cout << "4) Peek"<<endl;
    cout << "5) Exit" << endl;
    int ch, val;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            cout << "stack elements are : ";
            display();
            cout << endl;
        }
        case 4:
        {
            cout << "\nTop element is "
                 << peek() << endl;
        }
        case 5:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
        cout<<"Stack elements are: ";
        display();
        cout<<endl;
    } while (ch != 3);
   
    return 0;
}