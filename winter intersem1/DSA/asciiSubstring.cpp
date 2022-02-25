#include <iostream>
using namespace std;

void ascii(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    int code = ch;
    ascii(str.substr(1), ans);
    ascii(str.substr(1), ans + str[0]);
    ascii(str.substr(1), ans + to_string(code));
}

int main()
{
    string str = "ab";
    string ans;
    ascii("AB", "");
    return 0;
}