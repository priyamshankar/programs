#include <iostream>
#include <stack>
using namespace std;

void recSort(stack<int> &s, int ch)
{
    if (s.empty() || (!s.empty() && s.top() < ch))
    {
        // cout<<"x";
        s.push(ch);
        return;
    }
    int n = s.top();
    s.pop();
    recSort(s, ch);
    s.push(n);
}

void sorting(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    // cout << s.top() << endl;

    int ch = s.top();
    s.pop();
    sorting(s);
    recSort(s, ch);
    // s.push(ch);
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

    sorting(s);

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
    s.pop();
    cout << s.top() << endl;
    s.pop();
    return 0;
}