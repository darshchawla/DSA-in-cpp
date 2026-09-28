#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

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

int getLength(Node* &head)
{
    int length = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertAtHead(Node* &head, int value)
{
    Node* temp = new Node(value);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int value)
{
    Node* temp = new Node(value);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    cout << "First step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 20);
    cout << "Second step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 30);
    cout << "Third step : ";
    printLL(head);

    cout << endl;

    insertAtTail(tail, 40);
    cout << "Fourth step : ";
    printLL(head);

    cout << endl;

    insertAtTail(tail, 50);
    cout << "Fifth step : ";
    printLL(head);

    cout << endl;

    cout << "Length of the linked list is : " << getLength(head) << endl;

    return 0;
}