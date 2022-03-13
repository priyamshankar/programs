#include <iostream>
using namespace std;

string reverse(string str, int size, int count)
{
    if (count == size)
    {
        return str;
    }
    char s = str[count];
    reverse(str, size, count + 1);
    cout << s;
    return str;
}

int main()
{
    string str = "priyam";
    int size = 6;
    int count = 0;
    // char s;
    // cout << reverse(str, size, count);
    reverse(str, size, count);

    return 0;
}
