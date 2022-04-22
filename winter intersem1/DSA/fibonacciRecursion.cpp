// #include <iostream>
// using namespace std;
// int fibonacci(int n)
// {
//     if (n ==0)
//     {
//         // cout<<"returned";
//         return 0;
//     }
//     if (n==1){
//         return 1;
//     }
//     int ans=fibonacci(n-1)+fibonacci(n-2);
//     return ans;
//     // return (fibonacci(n - 1) + fibonacci(n - 2));
// }
// int main()
// {
//     // fibonacci(5);
//     cout<<fibonacci(3);
//     return 0;
// }


//2nd approach



#include <iostream>
using namespace std;
void fibonacci(int n, int n1, int n2)
{
    if (n <= 0)
    {
        return;
    }
    cout << n2<<" ";
    fibonacci(n - 1, n2, n1 + n2);
}

int main()
{
    cout<<'0';
    fibonacci(6, 0, 1);

    return 0;
}