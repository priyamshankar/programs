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
    int sumOfDigits(int n)
    {
        // Your code here
        if (n == 0)
        {
            return n;
        }
        int no = n % 10;
        no = no + sumOfDigits(n / 10);
        return no;
    }
};

// { Driver Code Starts.

int main()
{

    int n;

    // taking input n
    cin >> n;

    // calling method sumOfDigits()
    Solution obj;
    cout << obj.sumOfDigits(n) << endl;

    return 0;
} // } Driver Code Ends