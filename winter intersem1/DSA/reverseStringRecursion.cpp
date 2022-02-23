#include <iostream>
using namespace std;

int reverse(string &str, int i, int j)
{
    // cout << "operation started";
    cout << str << endl;
    if (i >= j)
    {
        return 0;
    }
    swap(str[i], str[j]);
    return reverse(str, ++i, --j);
}
int main()
{
    string str = "priyam";
    reverse(str, 0, str.length() - 1);
    // cout << reverse(str, 0, str.length() - 1);
    cout << str;
    return 0;
}