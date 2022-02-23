#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {

        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int placementIndex = start + count;
    swap(arr[start], arr[placementIndex]);

    int i = start, j = end;
    while (i < placementIndex && j > placementIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < placementIndex && j > placementIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return placementIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    int start = 0;
    int end = 12;
    int arr[] = {1,
                 4,
                 5,
                 67,
                 34,
                 4,
                 73,
                 243,
                 67,
                 34,
                 634,
                 52};
    quickSort(arr, start, end);
    for (int i = 0; i < end; i++)
    {
        cout << endl
             << arr[i];
    }
    return 0;
}