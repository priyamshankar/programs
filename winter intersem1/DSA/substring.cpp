#include <iostream>
#include <string>
using namespace std;
string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void substr(string s, string ansStr)
{
    if (s.length() == 0)
    {
        // cout<<ansStr<<endl;
        for (int i = 0; i < 10; i++)
        {
            if (ansStr == arr[i])
            {
                cout << i;
                // cout<<"1";
            }
        }
        return;
    }
    substr(s.substr(1), ansStr);
    substr(s.substr(1), ansStr + s[0]);
}

int main()
{

    string s;
    cin >> s;
    string ansStr = {};
    //   cout<<s.length();
    substr(s, ansStr);
}
