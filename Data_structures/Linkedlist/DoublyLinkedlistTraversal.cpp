#include <iostream>

using namespace std;

// Node structure for doubly linked list
struct Node
{
    int data;
    Node *next;
    Node *prev;
};

// Function to traverse and print the doubly linked list forward
void traverseForward(Node *head)
{
    cout << "Linked List (Forward): ";
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to traverse and print the doubly linked list backward
void traverseBackward(Node *tail)
{
    cout << "Linked List (Backward): ";
    while (tail != nullptr)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main()
{
    // Creating nodes for a sample doubly linked list
    Node *head = new Node{1, nullptr, nullptr};
    head->next = new Node{2, nullptr, head};
    head->next->next = new Node{3, nullptr, head->next};
    head->next->next->next = new Node{4, nullptr, head->next->next};

    // Traverse and print the doubly linked list forward
    traverseForward(head);

    // Find the tail of the list for backward traversal
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    // Traverse and print the doubly linked list backward
    traverseBackward(tail);

    return 0;
}
