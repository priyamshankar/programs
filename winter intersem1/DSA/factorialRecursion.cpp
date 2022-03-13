#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){

    // cout<<"enter the no.";
    // int n;
    // cin>>n;
    int ans=factorial(6);
    cout<<ans;

    return 0;
}