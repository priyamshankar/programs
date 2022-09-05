// phonebook rec

#include <iostream>
using namespace std;

string arr[] = {"0", "1", "abc", "def", "ghi",
                "jkl", "mno", "pqrs", "tuv", "wxyz"};

void recursion(string no, string ans)
{
    if (no.length() == 0)
    {
        cout << ans << endl;
        // cout << "2" << endl;   //activate comments to understand it
        return;
    }
    char ch = no[0];
    string str = arr[ch - '0'];
    string ros = no.substr(1);
    for (int i = 0; i < str.length(); i++)
    {
        // cout << "3"<<ch << endl;
        recursion(ros, ans + str[i]);
    }
}

int main()
{
    recursion("237", "");
    return 0;
}