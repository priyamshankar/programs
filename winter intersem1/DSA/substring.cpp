#include <iostream>
#include <vector>
using namespace std;

void substr(string s, string ansStr)
{
    if (s.length() == 0)
    {
        cout << ansStr<<endl;
        // cout<<'2'<<endl;
        return;
    }
    substr(s.substr(1), ansStr);
    substr(s.substr(1), ansStr + s[0]);
}

int main()
{
    string s = {'A', 'B', 'C','D','E'};
    string ansStr = {};
    substr(s, ansStr);
    return 0;
}