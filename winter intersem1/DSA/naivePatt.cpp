// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    // bool search(string pat, string txt) 
    bool search(string txt, string pat) 
    { 
    	
    	// Your code here
    	int m=pat.length();
    	int n = txt.length();
        if(m<n){
    	    return -1;
    	}
        else if(m<=0 || n<=0){
            return -1;
        }
    	int i,j;
    	
    	for (i=0; i< m-n;){
    	    for (j = i; j<n; j++){
    	        if (pat[i+j]!=txt[j]){
                    // i++;
                    if (j==0){
                        i++;
                    }
    	            break;
    	        }
    	    }
    	    
    	    // i=i+j;
    	    if(pat[i+j]==txt[j-1]){
    	        return i-j;
    	    }
            i=i+j;
    	}
    	return -1;
    	
    }
};


// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	

	    string s, p;
	    cin >> s >> p;
        // s="aabaacaadaabaaabaa";
        // p="asdasdasfasfasfasfagsagsd";
	    Solution obj;
	    // if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
        cout<<obj.search(p,s);
	
	
	return 0; 
}
  // } Driver Code Ends