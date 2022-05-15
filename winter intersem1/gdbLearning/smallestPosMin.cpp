// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        // Your code here
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int *sm = new int(max);
        // int sm[max];    
        sm[0] = 99;
        for (int i = 1; i < max; i++)
        {
            sm[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            sm[arr[i]] = 99;
        }
        // int 9
        for (int i = 0; i < max; i++)
        {
            if (sm[i] == 0)
            {
                return i;
            }
        }
        return max + 1;
    }
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main()
{

    // taking testcases

    // input number n
    int n;
    cin >> n;
    int arr[n];

    // adding elements to the array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Solution ob;
    // calling missingNumber()
    cout << ob.missingNumber(arr, n) << endl;

    return 0;
} // } Driver Code Ends