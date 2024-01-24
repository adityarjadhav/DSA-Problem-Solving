#include <iostream>
#include <cstdlib>

using namespace std;

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(Stack *ptr)
{
    return ptr->top == -1;
}

int isFull(Stack *ptr)
{
    return ptr->top == ptr->size - 1;
}

void push(Stack *ptr, int value)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow! Cannot push " << value << ".\n";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        cout << value << " pushed to the stack.\n";
    }
}

int main()
{
    Stack *s = new Stack;
    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];

        push(s, 20);
    push(s, 34);

    // Free allocated memory
    delete[] s->arr;
    delete s;

    return 0;
}
