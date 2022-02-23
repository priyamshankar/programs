#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n ==0)
    {
        // cout<<"returned";
        return 0;
    }
    if (n==1){
        return 1;
    }
    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
    // return (fibonacci(n - 1) + fibonacci(n - 2));
}
int main()
{
    // fibonacci(5);
    cout<<fibonacci(3);
    return 0;
}