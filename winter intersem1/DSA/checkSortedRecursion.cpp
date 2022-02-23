#include <iostream>
using namespace std;

bool sortCheck(int *arr, int size)
{
    if (size == 1 || size == 0)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return sortCheck(++arr, --size);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    // cout<<sortCheck(arr, 7);

    if (sortCheck(arr, 7))
    {
        cout << "sorted";
    }
    else
    {
        cout << "notsorted";
    }
    return 0;
}