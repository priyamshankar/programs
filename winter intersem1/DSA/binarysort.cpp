#include <iostream>
using namespace std;
void binarySort(int arr[], int key)
{
    int start;
    int end;
    int mid;
    start = 0;
    end = 10;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid;
        }
        else if (arr[mid] == key)
        {
            cout << "content matched at "<<mid+1;
            break;
        }
        else
        {
            cout << "no match found";
        }
        // cout<<arr[mid];
        // cout<<("here");
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    binarySort(arr, 8);
    return 0;
}