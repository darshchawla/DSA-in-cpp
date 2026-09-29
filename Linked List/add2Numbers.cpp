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

Node *reverse(Node *head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = previous;

        previous = current;
        current = next;
    }

    return previous;
}

void insertATtail(Node *&head, Node *&tail, int value)
{
    Node *temp = new Node(value);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        // create node and add in answer linked list
        insertATtail(ansHead, ansTail, digit);

        carry = sum / 10;

        first = first->next;
        second = second->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;

        insertATtail(ansHead, ansTail, digit);

        carry = sum / 10;

        first = first->next;
    }

    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;

        insertATtail(ansHead, ansTail, digit);

        carry = sum / 10;

        second = second->next;
    }

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;

        insertATtail(ansHead, ansTail, digit);

        carry = sum / 10;
    }

    return ansHead;
}

Node *addTwoNumbers(Node *first, Node *second)
{
    // step - 1 -> reverse both linked lists
    first = reverse(first);
    second = reverse(second);

    // step - 2 -> add both linked lists
    Node *answer = add(first, second);

    // step - 3 -> reverse the answer linked list
    answer = reverse(answer);

    return answer;
}

void insertAtTail(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
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

int main()
{
    Node *first = new Node(3);
    Node *head = first;
    Node *tail = first;

    cout << "The first linked list is : ";
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    printLL(head);

    cout << endl;

    Node *second = new Node(4);
    head = second;
    tail = second;

    cout << "The second linked list is : ";
    insertAtTail(tail, 5);
    printLL(head);

    cout << endl;

    Node *answer = addTwoNumbers(first, second);
    cout << "The sum of two linked list is : ";
    printLL(answer);

    return 0;
}