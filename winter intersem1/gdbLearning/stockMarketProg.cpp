// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> A, int n)
    {
            // code here
        vector<vector<int>>v1;
        int minBuy[n];
        int maxSell[n];
        minBuy[0]=A[0];
        
        for (int i=1;i<n-1;i++){
            minBuy[i]=min(minBuy[i-1],A[i]);
        }
        
        maxSell[n-1]=A[n-1];
        for (int i=n-2; i>=0; i--){
            maxSell[i]=max(maxSell[i+1],A[i]);
        }
        
        int x=0;
        for(int i=0;i<n;i++){
            if(maxSell[i]-minBuy[i]<=0){
                x=1;
            }
        }
        cout<<x;
        return v1;
       // return A;
    }
};

// { Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for (int i = 0; i < ans.size(); i++)
        c += A[ans[i][1]] - A[ans[i][0]];
    return (c == p) ? 1 : 0;
}

int main()
{

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    Solution ob;
    vector<vector<int>> ans = ob.stockBuySell(A, n);
    int p = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x = A[i + 1] - A[i];
        if (x > 0)
            p += x;
    }
    if (ans.size() == 0)
        cout << "No Profit";
    else
    {
        cout << check(ans, A, p);
    }
    cout << endl;

    return 0;
}

// } Driver Code Ends