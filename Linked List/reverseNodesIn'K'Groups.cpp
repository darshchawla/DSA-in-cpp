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

Node* reverseNodes(Node* &head, int k)
{
    // Base Case
    if (head == NULL || k <= 1)
    {
        return head;
    }

    // step 1 -> reverse first k nodes
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    int count = 0;

    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;

        count++;
    }

    // step 2 -> recursion

    if (next != NULL)
    {
        head->next = reverseNodes(next, k);
    }

    // step 3 -> return head of reversed linked list
    return prev;
}

int main()
{
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    cout << "The linked list is : ";

    insertAtTail(tail, 5);

    insertAtTail(tail, 7);

    insertAtTail(tail, 11);

    insertAtTail(tail, 14);

    insertAtTail(tail, 15);

    insertAtTail(tail, 17);
    printLL(head);

    cout << endl;

    int k;
    cout << "Enter number of groups to reverse the nodes of the linked list : ";
    cin >> k;

    cout << endl;

    cout << "The linked list after reversing nodes in " << k << " groups is : ";

    Node* answer = reverseNodes(head, k);
    printLL(answer);

    return 0;
}