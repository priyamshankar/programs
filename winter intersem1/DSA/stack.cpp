#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;
    stack(int size)
    {
        top = -1;
        this->size = size;
        arr = new int[size];
    }
    void push(int data)
    {
        if (size - top > 0)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << endl
                 << "stack overflow";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
            cout << endl
                 << arr[top];
        }
        else
        {
            cout<<endl<<"stack underflow";
        }
    }
};

int main()
{
    stack s(2);

    s.push(4);
    s.push(5);
    s.push(5);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    // s.pop();
    // s.pop();
    // s.push(5);
    // s.push(5);
    return 0;
}