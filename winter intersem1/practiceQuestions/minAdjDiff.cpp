#include <iostream>
using namespace std;

// n: size of array
int minAdjDiff(int arr[], int n)
{
    // Your code here
    int diff;
    int minDif = 10000000;
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] < 0 && arr[i + 1] >= 0) || (arr[i] >= 0 && arr[i + 1] < 0))
        {
            diff = abs(arr[i]) + abs(arr[i + 1]);
            if (abs(diff) < minDif)
            {
                minDif = diff;
            }
        }
        else
        {
            diff = abs(arr[i]) - abs(arr[i + 1]);
            if (abs(diff) < minDif)
            {
                minDif = abs(diff);
            }
        }
    }
    if ((arr[0] < 0 && arr[n - 1] >= 0) || (arr[0] >= 0 && arr[n - 1] < 0))
    {
        diff = abs(arr[0]) + abs(arr[n - 1]);
        if (abs(diff) < minDif)
        {
            minDif = abs(diff);
        }
    }
    else
    {
        diff = abs(arr[0]) - abs(arr[n - 1]);
        if (abs(diff) < minDif)
        {
            minDif = abs(diff);
        }
    }
    return minDif;
}
int main()
{
    int arr[] = {1, -1, 9, -9, 10, 11, 12};
    cout << minAdjDiff(arr, 7);

    return 0;
}