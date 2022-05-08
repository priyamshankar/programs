#include <iostream>
using namespace std;

void fib(int n, int m, int size)
{
    if (size == 0)
    {
        return;
    }
    cout << n << " ";
    fib(m, m + n, --size);
}

int main()
{
    fib(0, 1, 10);
    return 0;
}