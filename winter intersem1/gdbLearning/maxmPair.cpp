#include<iostream>
using namespace std;

int maxm(int m1,int m2){
    if (m1<=m2){
        return m2;
    }
    else{
        return m1;
    }
}
// Function to find maximum for every adjacent pairs in the array.
void maximumAdjacent(int sizeOfArray, int arr[]){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
    for (int i=1 ; i<sizeOfArray; i++){
        cout<<maxm(arr[i-1],arr[i])<<" ";
        i++;
        
     }
     
}

int main(){
    int arr[3]={78,77,45};
    maximumAdjacent(3,arr);
    return 0;
}