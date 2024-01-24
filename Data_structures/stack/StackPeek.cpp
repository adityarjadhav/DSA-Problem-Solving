#include <iostream>
using namespace std;

class stack
{

public:
    int size;
    int top;
    int *arr;
};

int peek(stack *sp, int i)
{
    int arrInd = sp->top - i + 1;
    if (arrInd < 0)
    {
        cout << "Empty stack";
    }
    else
    {
        return sp->arr[arrInd];
    }
    return -1;
}

int main()
{

    stack *s = new stack;
    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];

    for (int i = 0; i < 5; i++)
    {
        s->arr[++s->top] = i * 10;
    }
    cout << "peek at position 3:" << peek(s, 3);
}