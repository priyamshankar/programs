
#include <iostream>
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
void pop()
{
    struct Node *temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

void display()
{
    struct Node *temp;

    
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout <<temp->data << "-> ";
            temp = temp->link;
        }
    }
}
int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
 

void infixToPostfix(string s) {
 

    string result;
 
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        else if(c == '(')
            push('(');
 
        else if(c == ')') {
            while(peek() != '(')
            {
                result += peek();
                pop();
            }
            pop();
        }
 
       
        else {
            while(!isEmpty() && prec(s[i]) <= prec(peek())) {
                result += peek();
                pop(); 
            }
            push(c);
        }
    }
 
   
    while(!isEmpty()) {
        result += peek();
        pop();
    }
 
    cout << result << endl;
}
int main()
{
   string exp;
   cout<<"\n Enter the operation:";
   cin >>exp;
    infixToPostfix(exp);
    return 0;
}