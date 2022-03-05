#include <iostream>
using namespace std;

class stack
{
public:
    char *arr;
    int top;
    int size;
    stack(int size)
    {
        top = -1;
        this->size = size;
        arr = new char[size];
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
            cout << endl
                 << "stack underflow";
        }
    }
};

int main()
{
    string str = "priyam";
    stack s(str.length());

    cout << str.length();
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i < str.length(); i++)
    {
        s.pop();
    }
    // s.pop();
    // s.push(5);
    // s.push(5);
    return 0;
}