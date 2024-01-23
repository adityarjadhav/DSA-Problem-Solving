#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void traverseCircularLinkedList(Node *head)
{
    if (head == nullptr)
    {
        cout << "Circular Linked List is empty." << endl;
        return;
    }

    Node *current = head;

    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);

    cout << endl;
}

int main()
{
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->data = 1;
    second->data = 2;
    third->data = 3;

    first->next = second;
    second->next = third;
    third->next = first;

    Node *head = first;

    cout << "Circular Linked List: ";
    traverseCircularLinkedList(head);

    return 0;
}
