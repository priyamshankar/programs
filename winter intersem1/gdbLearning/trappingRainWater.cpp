// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        int edge;
        int eL;
        int eR;
        // edge=min(arr[0],arr[n-1]);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 1)
            {
                eL = arr[i];
                break;
            }
            
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] > 1)
            {
                eR = arr[i];
                break;
            }
        }

        edge = min(eL, eR);
        int level = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > edge)
            {
                continue;
            }
            else
            {
                level = level + (edge - arr[i]);
            }
        }
        return level;
    }
};

// { Driver Code Starts.

int main()
{

    int n;

    // size of array
    cin >> n;

    int a[n];

    // adding elements to the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Solution obj;
    // calling trappingWater() function
    cout << obj.trappingWater(a, n) << endl;

    return 0;
} // } Driver Code Ends