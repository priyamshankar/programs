#include <iostream>
using namespace std;

void swapEm(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }
}

void displaySwap(int arr[],int size){
    for ( int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int even[6]={1,2,3,4,5,6};
    int odd[7]={1,2,3,4,5,6,7};
    swapEm(odd,7);
    displaySwap(odd,7);
}