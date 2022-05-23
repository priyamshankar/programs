// { Driver Code Starts
// Initial Template for C++

// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Function to return the lexicographically sorted power-set of the string.

vector<string> powSetRec(string s, int i, string &str, vector<string> &ans)
{
    if (i >= s.length())
    {
        ans.push_back(str);
        // cout << ans[i] << endl;
        return ans;
    }

    powSetRec(s, i+1, str, ans);
    str = str + s[i];
    powSetRec(s, i+1, str, ans);

    // cout << ans[0];
    return ans;
    // powSetRec(s.substr())
}

vector<string> powerSet(string s)
{
    // Your code here
    int i = s.length();
    i = 0;
    string str = "";
    vector<string> ans;
    return powSetRec(s, i, str, ans);
    // return ans;
}

// { Driver Code Starts.

// Driver code
int main()
{

    string s;
    // cin >> s; // input string
    s = "abc";

    // calling powerSet() function
    vector<string> ans = powerSet(s);

    // sorting the result of the powerSet() function
    // sort(ans.begin(), ans.end());

    // // printing the result
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
    // for (int i = 0; i < 0; i++)
    // {
    //     cout << ans[i];
    // }
    // string str = "priyam";
    // // cout << str.substr(5);
    // // cout << str.append("fd");
    // str = str + "abc";
    // cout << str;
    return 0;
} // } Driver Code Ends