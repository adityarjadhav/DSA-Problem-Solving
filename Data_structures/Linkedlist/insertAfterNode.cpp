#include <iostream>

class Node
{
public:
    int data;
    Node *next;
};

void insertAfter(Node *prevNode, int newData)
{
    if (prevNode == nullptr)
    {
        std::cout << "Error: The given previous node cannot be NULL" << std::endl;
        return;
    }

    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        std::cout << " " << node->data;
        node = node->next;
    }
    std::cout << "\n";
}

int main()
{
    Node *head = nullptr;

    Node *firstNode = new Node();
    firstNode->data = 6;
    firstNode->next = nullptr;
    head = firstNode;

    Node *secondNode = new Node();
    secondNode->data = 5;
    secondNode->next = nullptr;
    firstNode->next = secondNode;

    Node *thirdNode = new Node();
    thirdNode->data = 4;
    thirdNode->next = nullptr;
    secondNode->next = thirdNode;

    Node *fourthNode = new Node();
    fourthNode->data = 3;
    fourthNode->next = nullptr;
    thirdNode->next = fourthNode;

    Node *fifthNode = new Node();
    fifthNode->data = 2;
    fifthNode->next = nullptr;
    fourthNode->next = fifthNode;

    std::cout << "Created Linked list is: ";
    printList(head);

    insertAfter(fifthNode, 1);

    std::cout << "After inserting 1 after 2: ";
    printList(head);

    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}