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

void insertATtail(Node* &tail, Node* current)
{
    tail->next = current;
    tail = current;
}

Node* sortList(Node* head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* current = head;

    while (current != NULL)
    {
        int value = current->data;

        if (value == 0)
        {
            insertATtail(zeroTail, current);
        }
        else if (value == 1)
        {
            insertATtail(oneTail, current);
        }
        else if (value == 2)
        {
            insertATtail(twoTail, current);
        }
        current = current->next;
    }

    if (oneHead->next != NULL) // 1s list is not empty
    {
        zeroTail->next = oneHead->next;
    }
    else // 1s list is empty
    {
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

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