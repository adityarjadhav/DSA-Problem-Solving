#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    char *arr;

    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new char[size];
    }
};

bool isEmpty(Stack *ptr)
{
    return (ptr->top == -1);
}

bool isFull(Stack *ptr)
{
    return (ptr->top == ptr->size - 1);
}

void push(Stack *ptr, char val)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow! Cannot push " << val << " to the stack" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack Underflow! Cannot pop from the stack" << endl;
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *exp)
{
    // Create and initialize the stack
    Stack *sp = new Stack(100);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "((8)+(54*9))";

    // Check if stack is empty
    if (parenthesisMatch(exp))
    {
        cout << "The parenthesis is matching" << endl;
    }
    else
    {
        cout << "The parenthesis is not matching" << endl;
    }

    return 0;
}
