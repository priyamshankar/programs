#include <iostream>
using namespace std;

int binarySearch(int arr[])
{
    int start;
    int end;
    int mid;
    start = 0;
    end = 7;
    while (start < end)
    {
        mid = (start + (end-start)/2);
        if (arr[mid] > arr[start])
        {
            start = mid;
        }
        else if (arr[mid] < arr[start])
        {
            end = mid;
        }
        else if (arr[mid] == mid)
        {
            cout << "content matched at " << mid + 1;
            break;
        }
        
        cout << arr[mid];
        // cout << ("here");
    }
    return mid;
}

int main()
{

    int arr[] = { 10,11,12, 1, 2, 3, 4};
    binarySearch(arr);
    cout<<binarySearch(arr);
    return 0;

}

// shriram.r@vitbhopal.ac.in