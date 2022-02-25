#include <iostream>
using namespace std;

string duplicateChecker(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = duplicateChecker(s.substr(1));
    if (ch == ans[0])
    {
        // cout<<ans<<endl;
        return ans;
    }
    else
    {
        // cout<<ch<<ans<<endl;
        return ch+ans;
    }
}

int main()
{
    string s = "aaaabbaacdde";
    cout<<duplicateChecker(s);
    return 0;
}