#include <iostream>
using namespace std;
int sumArr(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    return arr[0] + sumArr(++arr, --size);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sumArr(arr, 8);
    int arr2[] = {2,4};
    cout << endl
         << sumArr(arr2, 2);

    return 0;
}