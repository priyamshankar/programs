// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
        void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        // int arrRet[N]={0};
        
        // vector<int> arrRet ={0};
        int *arrRet=new int[N];
        for(int i=0;i<N;i++){
            arrRet[i]=0;
        }
        for (int i=0; i<N;i++){
            if (arr[i]<=P && arr[i]>=1){
                arrRet[arr[i]-1]++;
            // arrRet.insert(arrRet.begin()+arr[i],+1);
            }
        }
        // arr[]={0};
        arr.clear();
        for (int i=0; i<N;i++){
            // arr[i]=arrRet[i];
            arr.push_back(arrRet[i]);
        }
    }
};

// { Driver Code Starts.

int main()
{

    // testcases
    // while (t--)
    // {

    int N, P;
    // size of array
    cin >> N;

    vector<int> arr(N);

    // adding elements to the vector
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> P;
    Solution ob;
    // calling frequncycount() function
    ob.frequencyCount(arr, N, P);

    // printing array elements
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
    // }
    return 0;
}

// } Driver Code Ends