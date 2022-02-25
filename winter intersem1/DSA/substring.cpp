#include <iostream>
#include <vector>
using namespace std;

void substr(string s, string ansStr)
{
    if (s.length() == 0)
    {
        cout << ansStr<<endl;
        return;
    }

    substr(s.substr(1), ansStr);
    substr(s.substr(1), ansStr + s[0]);
}

int main()
{
    string s = {'A', 'B', 'C'};
    string ansStr = {};
    substr(s, ansStr);
    return 0;
}