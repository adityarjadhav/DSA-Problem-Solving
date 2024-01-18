#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != nullptr)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// Function to insert a value at the beginning of the linked list
Node* insertAtBeginning(Node *head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Allocate memory for nodes in the linked list on the heap
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = nullptr;

    cout << "Original Linked List:" << endl;
    linkedListTraversal(head);

    // Insert a value at the beginning
    int valueToInsert = 3;
    head = insertAtBeginning(head, valueToInsert);

    cout << "\nLinked List after insertion at the beginning:" << endl;
    linkedListTraversal(head);

    // Release allocated memory
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}

