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

unique_ptr<Node> insertAtBeginning(unique_ptr<Node> head, int value)
{
    auto newNode = make_unique<Node>();
    newNode->data = value;
    newNode->next = move(head);
    return newNode;
}

int main()
{
    // Allocate memory for nodes in the linked list on the heap and link them
    Node *head = new Node{7, nullptr};
    Node *second = new Node{11, nullptr};
    Node *third = new Node{41, nullptr};
    Node *fourth = new Node{66, nullptr};

    // Link nodes to form a linked list
    head->next = second;
    second->next = third;
    third->next = fourth;

    cout << "Original Linked List:" << endl;
    linkedListTraversal(head);

    // Insert a new node at the beginning
    head = insertAtBeginning(move(unique_ptr<Node>(head)), 3);

    cout << "\nLinked List after insertion at the beginning:" << endl;
    linkedListTraversal(head);

    // Release allocated memory to prevent memory leaks
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}

