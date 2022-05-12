#include <iostream>
using namespace std;

int sumup(int *arr, int size)
{
    if (size == 0)
    {
        // int sum = 0;
        return 0;
    }
    return arr[0] + sumup(++arr, --size);
}
int main()
{
    cout << "funciton is here\n";
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sumup(arr, 5);

    return 0;
}