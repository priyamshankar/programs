#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

int main()
{
    return 0;
}