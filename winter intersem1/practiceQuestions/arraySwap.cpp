#include <iostream>
using namespace std;

void swapEm(int *arr, int size)
{
    if (size == 1)
    {
        return;
    }
    else if (size == 0)
    {
        return;
    }
    swap(arr[0], arr[1]);
    swapEm(arr + 2, size - 2);
}

void displaySwap(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};
    swapEm(odd, 7);
    displaySwap(odd, 7);
    cout << endl;
    swapEm(even, 6);
    displaySwap(even, 6);
}