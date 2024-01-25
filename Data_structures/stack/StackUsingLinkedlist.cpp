#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

bool isEmpty(Node *top)
{
    return (top == NULL);
}

bool isFull(Node *top)
{
    Node *p = new Node;
    if (p == NULL)
    {
        return true;
    }
    else
    {
        delete p;
        return false;
    }
}

Node *push(Node *top, int x)
{
    if (isFull(top))
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        Node *n = new Node;
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
}

int pop(Node **top)
{
    if (isEmpty(*top))
    {
        cout << "Stack Underflow\n";
        return -1; // Assuming -1 represents an invalid value when the stack is underflowed
    }
    else
    {
        Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        delete n;
        return x;
    }
}

int main()
{
    Node *top = NULL;

    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);

    linkedListTraversal(top);

    return 0;
}
