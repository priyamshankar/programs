#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int lenLeft = mid - start + 1;
    int lenRight = end - mid;
    // new array to copy
    int *leftT = new int[lenLeft];
    int *rightT = new int[lenRight];

    // copying the element to the new array
    int startIndex = start;
    for (int i = 0; i < lenLeft; i++)
    {
        leftT[i] = arr[startIndex++];
    }

    int midIndex = mid + 1;
    for (int i = 0; i < lenRight; i++)
    {
        rightT[i] = arr[midIndex++];
    }

    // sorting into the old array from the new array
    int indexLeftSort = 0;
    int indexRightSort = 0;
    startIndex = start;

    while (indexLeftSort < lenLeft && indexRightSort < lenRight)
    {
        if (leftT[indexLeftSort] < rightT[indexRightSort])
        {

            arr[startIndex++] = leftT[indexLeftSort++];
        }
        else
        {
            arr[startIndex++] = rightT[indexRightSort++];
        }
    }

    while (indexLeftSort < lenLeft)
    {
        arr[startIndex++] = leftT[indexLeftSort++];
    }

    while (indexRightSort < lenRight)
    {
        arr[startIndex++] = rightT[indexRightSort++];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main()
{
    int arr[] = {4, 68, 3, 215, 76, 8456, 7, 3, 1, 66, 11};
    int start = 0;
    int end = 11;

    mergeSort(arr, start, end);
    for (int i = 0; i < end; i++)
    {
        cout << endl
             << arr[i];
    }

    return 0;
}