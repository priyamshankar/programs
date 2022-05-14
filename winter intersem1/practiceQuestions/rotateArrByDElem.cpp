#include <iostream>
#include <cmath>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[high], arr[low]);

        low++;
        high--;
    }
}

void leftRotate(int arr[], int d, int n)
{
    reverse(arr, 0, d - 1);

    reverse(arr, d, n - 1);

    reverse(arr, 0, n - 1);
}

int main()
{
    int n, d;
    cin >> n;
    cin >> d;
    int arr[n];

    // cout << "Before Rotation" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    leftRotate(arr, d, n);

    cout << "After Rotation" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}