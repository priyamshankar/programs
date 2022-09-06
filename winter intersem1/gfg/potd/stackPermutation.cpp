//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int isStackPermutation(int N, vector<int> &A, vector<int> &B)
    {
        int pb = 0;
        int pa = 1;
        stack<int> st;
        st.push(A[0]);
        while (pb != N)
        {
            if (st.top() == B[pb])
            {
                st.pop();
                pb++;
            }
            else
            {
                st.push(A[pa]);
                pa++;
            }
            if (pb >= N - 1)
                return 1;
            if (st.size() == N && st.top() != B[pb])
                return 0;
            if (pa == N && st.top() != B[pb])
                return 0;
            if (st.empty())
            {
                st.push(A[pa]);
                pa++;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    Solution ob;
    cout << ob.isStackPermutation(n, a, b) << endl;

    return 0;
}
// } Driver Code Ends