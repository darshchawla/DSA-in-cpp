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
        next = NULL;
    }
};

void insertNode(Node* &tail, int element, int value)
{
    // element is present in the list
    if (tail == NULL) // empty list
    {
        Node* newNode = new Node(value);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // element is present in the list
        // non - empty list
        Node* current = tail;
        while (current->data != element)
        {
            current = current->next;
        }

        // element found
        Node* temp = new Node(value);
        temp->next = current->next;
        current->next = temp;
    }
}

void deleteNode(Node* &tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "The linked list is empty." << endl;
        return;
    }
    else
    {
        // non - empty list
        // assuming the value is present in the list
        Node* prev = tail;
        Node* current = prev->next;

        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;
        if (tail == current)
        {
            tail = prev;
        }
        current->next = NULL;
        delete current;
    }
}

void printLL(Node* &tail)
{
    Node* temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node* tail = NULL;

    // inserting in empty list
    insertNode(tail, 5, 3);
    printLL(tail);

    cout << endl;

    insertNode(tail, 3, 5);
    printLL(tail);

    cout << endl;

    insertNode(tail, 5, 7);
    printLL(tail);

    cout << endl;

    insertNode(tail, 7, 9);
    printLL(tail);

    cout << endl;

    insertNode(tail, 5, 6);
    printLL(tail);

    cout << endl;

    deleteNode(tail, 6);
    printLL(tail);

    return 0;
}