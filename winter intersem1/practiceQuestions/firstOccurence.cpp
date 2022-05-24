// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(int x)
{
    // Your code goes here
    int start, end;
    start = 0;
    end = x;
    int ans = 0;
    while (end >= start)
    {
        int mid = (start + mid) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
            // ans=end;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

// Driver Code Starts.

int main()
{
    long long n;
    cin >> n;
    cout << floorSqrt(n) << endl;

    return 0;
}
// } Driver Code Ends