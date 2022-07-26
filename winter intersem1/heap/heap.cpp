#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int *arr;
    int size;
    int cap;

    heap(int cap)
    {
        int *arr = new int(cap);
        this->size = 0;
        this->cap = cap;
    }

    int insert(int data)
    {
        this->arr[0] = data;
        return this->arr[0];
    }
};

int left(int data)
{
    heap *head = new heap(6);
    cout << head->cap;
    return head->size;
}

int main()
{
    heap obj(5);
    // cout << obj.insert(56);
    left(78);
    cout << obj.cap;

    return 0;
}