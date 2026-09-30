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

Node* mergeLists(Node* head1, Node* head2)
{
    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data <= head2->data)
    {
        head1->next = mergeLists(head1->next, head2);
        return head1;
    }
    else
    {
        head2->next = mergeLists(head1, head2->next);
        return head2;
    }
}

int main()
{
    Node* first = new Node(1);
    Node* head1 = first;
    Node* tail1 = first;

    cout << "The first linked list is : ";
    insertAtTail(tail1, 2);
    insertAtTail(tail1, 7);
    insertAtTail(tail1, 9);
    printLL(head1);

    cout << endl;

    Node* second = new Node(7);
    Node* head2 = second;
    Node* tail2 = second;

    cout << "The second linked list is : ";
    insertAtTail(tail2, 15);
    insertAtTail(tail2, 18);
    insertAtTail(tail2, 35);
    printLL(head2);

    cout << endl;

    Node* answer = mergeLists(head1, head2);
    cout << "The merged linked list is : ";
    printLL(answer);

    return 0;
}