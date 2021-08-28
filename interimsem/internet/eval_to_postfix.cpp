#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};


struct Node *top;
void push(int data)
{
    struct Node *temp;
    temp = new Node();

    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    
    temp->data = data;
    temp->link = top;
    top = temp;
}

int isEmpty()
{
    return top == NULL;
}
int peek()
{
    if (!isEmpty())
        return top->data;
    
}


int main()
{
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    cout<<"Enter the expression :: ";
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = peek();
            n2 = peek();
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        e++;
    }
   
     printf("\nThe result of expression %s  =  %d\n\n",exp,peek());
    return 0;
}