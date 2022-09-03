//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool ansFnc(vector<int> cook, int elem, int l, int n)
    {
        int nos = 0;
        for (int i = 0; i < l; i++)
        {
            int prefix_sum = cook[i];
            // cout << prefix_sum;
            int timer = elem;
            while (timer >= 0)
            {
                timer -= prefix_sum;
                // cout<<timer<<endl;
                if (timer >= 0)
                {
                    nos++;
                    prefix_sum += cook[i];
                    // cout<<prefix_sum<<endl;
                }
                // cout<<endl;
                // cout<<timer<<endl;
            }
        }
        // cout<<nos<<endl;
        if (nos >= n)
            return true;
        return false;
    }
    int findMinTime(int N, vector<int> &A, int L)
    {
        int l = 0;
        int r = 1e9;
        int ans = 0;
        while (l < r)
        {
            
            int mid = (l + r) / 2;
            // cout<<l<<"-"<<r<<"-"<<mid<<endl;
            if (ansFnc(A, mid, L, N))
            {
                ans=mid;
                r = mid;
            }
            else
                l = mid + 1;

            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int n;
    cin >> n;
    int l;
    cin >> l;
    vector<int> arr(l);
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    int ans = ob.findMinTime(n, arr, l);
    cout << ans << endl;

    return 0;
}

// } Driver Code Ends