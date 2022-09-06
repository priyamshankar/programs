#include<bits/stdc++.h>
using namespace std;

int findContiguougSeq(int arr[],int n){
int maxm=INT_MIN;
int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            sum+=arr[i];
            maxm=max(maxm,sum);
        }
        else{
            sum=0;
        }
    }
    return maxm;
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findContiguougSeq(arr,n);

    return 0;
}