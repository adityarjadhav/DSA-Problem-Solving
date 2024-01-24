#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;
};

bool isEmpty(Stack *ptr)
{
    return (ptr->top == -1);
}

bool isFull(Stack *ptr)
{
    return (ptr->top == (ptr->size - 1));
}

void push(Stack *ptr, int value)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow: Cannot push " << value << ". Stack is full." << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        cout << value << " pushed into the stack." << endl;
    }
}

int pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack Underflow: Cannot pop from an empty stack." << endl;
        return -1; // Default value for an empty stack
    }
    else
    {
        int poppedValue = ptr->arr[ptr->top];
        ptr->top--;
        cout << "Popped value: " << poppedValue << endl;
        return poppedValue;
    }
}

int main()
{
    Stack *s = new Stack;
    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];

    push(s, 23);
    push(s, 32);

    int poppedValue = pop(s);

    if (isEmpty(s))
    {
        cout << "Stack is empty." << endl;
    }

    return 0;
}
