// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    int x=0;
public:
    int josephus(int n, int k)
    {
        // Your code here
        if (k <= 0)
        {
            return n;
        }
        // int x;
        x++;
        josephus(--n, --k);
        return x+1;
    }
};

// { Driver Code Starts.

int main()
{

    int n, k;
    cin >> n >> k; // taking input n and k

    // calling josephus() function
    Solution ob;
    cout << ob.josephus(n, k) << endl;

    return 0;
} // } Driver Code Ends