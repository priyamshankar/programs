//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        // code here
        sort(arr, arr + n);
        int minm = arr[0];
        int maxm = arr[n - 1];
        int diff = maxm - minm;

        if (arr[n - 1] - k < 0)
        {
            return diff;
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - k >= 0)
            {
                minm = min(arr[0] + k, arr[i] - k);
            }
            else
                minm = min(arr[0] + k, arr[i] + k);

            // if(arr[i-1])
            maxm = max(arr[n - 1] - k, arr[i - 1] + k);
            if (arr[i] - k >= 0)diff = min(maxm - minm, diff);
        }
        return diff;
    }
};

//{ Driver Code Starts.
int main()
{

    int n, k;
    cin >> k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.getMinDiff(arr, n, k);
    cout << ans << "\n";

    return 0;
}
// } Driver Code Ends