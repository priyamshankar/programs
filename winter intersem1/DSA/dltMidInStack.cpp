#include <iostream>
#include <stack>
using namespace std;

void stackMid(stack<int> &s, int count, int size)
{
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    int track = s.top();
    s.pop();
    stackMid(s, count + 1, size);
    s.push(track);
}

int main()
{
    stack<int> s;
    s.push(33);
    s.push(3);
    s.push(9);
    s.push(1);
    s.push(7);
    s.push(6);
    s.push(54);
    s.push(3);
    stackMid(s, 0, 8);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    


    return 0;
}