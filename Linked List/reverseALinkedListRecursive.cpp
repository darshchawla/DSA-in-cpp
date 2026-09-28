#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void insert(Node* &head, int value)
{
    Node* temp = new Node(value);

    temp->next = head;
    head = temp;
}

void printLL(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node* &head, Node* current, Node* previous)
{
    // Base Case
    if (current == NULL)
    {
        head = previous;
        return;
    }
    Node* forward = current->next;
    reverse(head, forward, current);
    current->next = previous;
}

Node* reverseRecursive(Node* head)
{
    Node* previous = NULL;
    Node* current = head;
    reverse(head, current, previous);
    return head;
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;

    cout << "First step : ";

    printLL(head);

    cout << endl;

    insert(head, 20);

    cout << "Second step : ";

    printLL(head);

    cout << endl;

    insert(head, 30);

    cout << "Third step : ";

    printLL(head);

    cout << endl;

    insert(head, 40);

    cout << "Fourth step : ";

    printLL(head);

    cout << endl;

    insert(head, 50);

    cout << "Fifth step : ";

    printLL(head);

    cout << endl;

    Node* answer = reverseRecursive(head);

    cout << "Reversed linked list is : ";

    printLL(answer);

    return 0;
}