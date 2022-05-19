// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    int countIt(int n)
    {
        if (n == 0)
        {
            return n;
        }
        int sum = countIt(n / 10) + n % 10;
        // cout<<sum;
        return sum;
    }
    int digitalRoot(int &n)
    {
        // Your code here
        if (n / 10 == 0)
        {
            cout<<n<<endl;
            return n;
        }
        n = countIt(n);
        int xi = n;
        // cout<<endl;
        // cout <<n;
        // return xi;
        return digitalRoot(n);
        cout<<xi;

    }
};

// { Driver Code Starts.

int main()
{

    int n;
    cin >> n; // taking number n

    // calling digitalRoot() function
    Solution obj;
    cout << obj.digitalRoot(n) << endl;

    return 0;
} // } Driver Code Ends