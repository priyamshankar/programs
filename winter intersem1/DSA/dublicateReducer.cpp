#include <iostream>
using namespace std;

void duplicateChecker(string &s, int i, char c, int count)
{
    if (i >= 14)
    {
        cout<<endl<<s;
        return;
    }
    if (c == s[i])
    {
        // count++;
        // s.substr(i,1);
        // cout<<"23";
    }
    else
    {
        count++;
        c = s[i];
        cout<<c;
        // s.substr();
    }
    duplicateChecker(s, i + 1, c, count);
    // cout<<s;
}

int main()
{
    string s = "aaabaabbbccccd";
    int i = 0;
    char check='h';
    int count;
    cout<<s<<endl;
    duplicateChecker(s, i, check, count);
    cout<<endl<<s<<endl;
    return 0;
}