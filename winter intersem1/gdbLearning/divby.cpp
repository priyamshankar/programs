#include<iostream>
using namespace std; 
int main(){
    int n=0; 
    int count=0;
    while(n>=0){
        cin>>n;
        if(n%6==0)count++;
    }
    cout<<count;
    return 0;
}