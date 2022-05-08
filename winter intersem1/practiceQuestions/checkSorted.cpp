#include <iostream>
using namespace std;

bool ifSort(int *arr, int size)
{
    if (size == 0)
    {
        return true;
    }
    if (arr[0] < arr[1])
    {
        ifSort(++arr, --size);
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    if (ifSort(arr, 7))
    {
        cout << "sorted";
    }
    else
    {
        cout << "notsorted";
    }
    return 0;
}