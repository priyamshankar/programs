#include <iostream>
using namespace std;

string moveX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char x = 'x';

    string ans = moveX(s.substr(1));
    if (x == s[0])
    {
        return  ans + x;
    }
    return s[0]+ans;
}

int main()
{
    string s = "zxcvcxzxcxzxccvcxzxcvcxccdexcvcxcdx";
    cout << moveX(s);

    return 0;
}