#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value)
{
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
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

Node* removeDuplicates(Node* head)
{
    // empty list
    if (head == NULL)
    {
        return NULL;
    }

    // non - empty list
    Node* current = head;

    while (current != NULL)
    {
        if ((current->next != NULL) && (current->data == current->next->data))
        {
            Node* next_next = current->next->next;
            Node* nodeToDelete = current->next;

            delete nodeToDelete;

            current->next = next_next;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;

    cout << "First step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 5);
    cout << "Second step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 5);
    cout << "Third step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 7);
    cout << "Fourth step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 7);
    cout << "Fifth step : ";
    printLL(head);

    cout << endl;

    cout << "The linked list after removing duplicates is : ";

    Node* answer = removeDuplicates(head);
    printLL(answer);

    return 0;
}