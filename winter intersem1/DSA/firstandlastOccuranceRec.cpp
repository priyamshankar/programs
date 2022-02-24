#include <iostream>
using namespace std;
int firstNlast(int arr[], int size)
{
    if (size == 0)
    {
        return arr[size];
    }

    return firstNlast(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 6;
    cout << firstNlast(arr, size);
    return 0;
}