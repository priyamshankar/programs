//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findMinTime(int N, vector<int> &A, int L)
    {
        // write your code here
        int times = 1;
        int count = 0;
        while (count <= N)
        {
            for (int i = 0; i < L; i++)
            {
                if (times % A[i] == 0)
                {
                    count++;
                    // cout<<count<<endl;
                }
                if(count==N)break;
                cout<<i<<" "<<count<<endl;
            }
            if (count==N)break;
            cout<<"new line\n";
            times++;
        }
        return times;
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