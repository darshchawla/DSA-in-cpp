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

void insertNode(Node *&tail, int element, int value)
{
    // element is present in the list
    if (tail == NULL) // empty list
    {
        Node *newNode = new Node(value);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // element is present in the list
        // non - empty list
        Node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }

        // element found
        Node *temp = new Node(value);
        temp->next = current->next;
        current->next = temp;
    }
}

void printLL(Node *&tail)
{
    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    if (head->next == NULL)
    {
        return false;
    }
    if (head->next == head)
    {
        return true;
    }

    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }

    return false;
}

int main()
{
    Node *tail = NULL;

    cout << "The linked list is : ";

    // inserting in empty list
    insertNode(tail, 5, 3);

    insertNode(tail, 3, 5);

    insertNode(tail, 5, 7);

    insertNode(tail, 7, 9);

    insertNode(tail, 5, 6);

    printLL(tail);

    cout << endl;

    bool answer = isCircular(tail);

    if (answer == 1)
    {
        cout << "The given linked list is a circular linked list." << endl;
    }
    else
    {
        cout << "The given linked list is not a circular linked list." << endl;
    }

    return 0;
}