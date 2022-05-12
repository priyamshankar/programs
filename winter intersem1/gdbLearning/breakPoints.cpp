#include <iostream>
using namespace std;

void someFnc(int i)
{
    i = 34;
}

int main()
{

    int i = 1;
    i = 3;
    i = 5;
    i = 9;
    int j = 4;
    j = 5;
    j = 14;
    cout << "the program is running";
    someFnc(j);
    return 0;
}