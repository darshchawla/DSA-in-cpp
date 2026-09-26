#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtTail(Node* &tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

void printLL(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    cout << "First step : ";

    printLL(head);

    cout << endl;

    insertAtTail(tail, 20);

    cout << "Second step : ";

    printLL(head);

    cout << endl;

    insertAtTail(tail, 30);

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

    return 0;
}