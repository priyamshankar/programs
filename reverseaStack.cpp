#include <iostream>
#include <stack>
using namespace std;

void stackRev(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    cout<<s.top()<<endl;

    int ch=s.top();
    s.pop();
    stackRev(s);
    s.push(ch);
    cout<<s.top()<<endl;
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

    stackRev(s);
    return 0;
}