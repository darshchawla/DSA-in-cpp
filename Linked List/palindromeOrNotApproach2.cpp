#include <iostream>
#include <vector>
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

void insertAtTail(Node* &tail, int value)
{
    Node* temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

Node* getMid(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* reverse(Node* head)
{
    Node* previous = NULL;
    Node* current = head;

    while (current != NULL)
    {
        Node* next;
        next = current->next;
        current->next = previous;

        previous = current;
        current = next;
    }

    return previous;
}

bool isPalindrome(Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    if (head->next->next == NULL)
    {
        return false;
    }

    // step 1 -> find middle
    Node* middle = getMid(head);

    // step 2 -> reverse linked list after middle
    Node* temp = middle->next;
    middle->next = reverse(temp);

    // step 3 -> compare both halves
    Node* head1 = head;
    Node* head2 = middle->next;

    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // step 4 -> repeat step 2 -> reverse linked list after middle
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}

int main()
{
    Node* newNode = new Node(10);

    Node* head = newNode;
    Node* tail = newNode;

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

    insertAtTail(tail, 20);
    cout << "Fourth step : ";
    printLL(head);

    cout << endl;

    insertAtTail(tail, 10);
    cout << "Fifth step : ";
    printLL(head);

    cout << endl;

    bool answer = isPalindrome(head);

    if (answer == 1)
    {
        cout << "The given linked list is a palindrome." << endl;
    }
    else
    {
        cout << "The given linked list is not a palindrome." << endl;
    }

    return 0;
}