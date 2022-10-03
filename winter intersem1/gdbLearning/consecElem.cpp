// #include <iostream>
// #include <cmath>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

void ans(vector<int> v, vector<int> &res)
{
    int minm = -1;
    int c=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(i!=v.size()-1)c=log10(v[i+1])+1;
        int count=log10(v[i]) + 1;
        if (count == 1)
        {

            minm = v[i];
        }
        if (count == 1 && i == v.size() - 1)
        {
            res.push_back(minm);
            break;
        }
        else if (count == 1 && c != 1)
        {
            res.push_back(minm);
            c=0;
            minm=-1;
        }
        if (count != 1)
        {
            res.push_back(v[i]);
        }
    }
}

int main()
{

    int n = 0;
    int minm = 0;
    vector<int> v;
    while (n >= 0)
    {
        cin >> n;
        if (n >= 0)
            v.push_back(n);
    }
    vector<int> res;
    ans(v,res);
    for (int i=0; i<res.size(); i++)
    {
        cout << res[i];
        if(i!=res.size()-1)cout<<endl;
    }
    return 0;
}