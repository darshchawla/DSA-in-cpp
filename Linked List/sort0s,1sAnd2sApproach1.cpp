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

void insertAtTail(Node* &tail, int value)
{
    Node* temp = new Node(value);
    tail->next = temp;
    tail = temp;
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

Node* sortList(Node* head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        else if (temp->data == 1)
        {
            oneCount++;
        }
        else
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }

    return head;
}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    cout << "The linked list is : ";

    insertAtTail(tail, 1);

    insertAtTail(tail, 0);

    insertAtTail(tail, 2);

    insertAtTail(tail, 0);
    printLL(head);

    cout << endl;

    cout << "The linked list after sorting 0s, 1s and 2s is : ";
    Node *answer = sortList(head);
    printLL(answer);

    return 0;
}