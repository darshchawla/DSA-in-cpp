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

void insertAtHead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

void printLL(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *removeDuplicates(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *temp = current;
        while (temp->next != NULL)
        {
            if (current->data == temp->next->data)
            {
                Node *duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }
            else
            {
                temp = temp->next;
            }
        }
        current = current->next;
    }

    return head;
}

int main()
{
    Node *node1 = new Node(1);

    Node *head = node1;

    cout << "First step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 5);
    cout << "Second step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 1);
    cout << "Third step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 2);
    cout << "Fourth step : ";
    printLL(head);

    cout << endl;

    insertAtHead(head, 2);
    cout << "Fifth step : ";
    printLL(head);

    cout << endl;

    cout << "The linked list after removing duplicates is : ";

    Node *answer = removeDuplicates(head);
    printLL(answer);

    return 0;
}