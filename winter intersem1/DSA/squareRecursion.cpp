#include <iostream>
using namespace std;
int square(int no, int sq)
{
    if(sq==0){
        return 1;
    }else if(sq==1){
        return no;
    }
    if (sq % 2 == 0)
    {
        // even
        int even=square(no, sq / 2) * square(no , sq / 2);
        return even;
    }
    else
    {
        // odd
        int odd=no*square(no, sq/2)*square(no , sq/2);
        return odd;
    }
}
int main()
{
    cout<<square(2, 25);

    return 0;
}