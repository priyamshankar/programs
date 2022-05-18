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
    // Function to find the length of longest subarray of even and odd numbers.
    bool isEven(int n)
    {
        if (n % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isOdd(int n)
    {
        if (n % 2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int maxEvenOdd(int arr[], int n)
    {
        // Your code here
        int curr = 1;
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            if ((isEven(arr[i - 1]) && isOdd(arr[i])) || isOdd(arr[i - 1]) && isEven(arr[i]))
            {
                curr++;
            }
            else
            {
                curr = 1;
            }
            res = max(res, curr);
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{

    int sizeOfArray;
    // size of array
    cin >> sizeOfArray;
    int arr[sizeOfArray];

    // inserting elements in the array
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    // calling function
    cout << ob.maxEvenOdd(arr, sizeOfArray) << endl;

    return 0;
}
// } Driver Code Ends