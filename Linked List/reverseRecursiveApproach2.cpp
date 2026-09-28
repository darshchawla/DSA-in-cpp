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
        next = nullptr;
    }
};

void insert(Node* &head, int value)
{
    Node* temp = new Node(value);

    temp->next = head;
    head = temp;
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

Node* reverse(Node* &head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* head2 = reverse(head->next); // remaining list ko reverse karke uska head nikal rhi hai
    head->next->next = head;
    head->next = NULL;

    return head2;
}

Node* reverseRecursive(Node* head)
{
    return reverse(head);
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;

    cout << "First step : ";

    printLL(head);

    cout << endl;

    insert(head, 20);

    cout << "Second step : ";

    printLL(head);

    cout << endl;

    insert(head, 30);

    cout << "Third step : ";

    printLL(head);

    cout << endl;

    insert(head, 40);

    cout << "Fourth step : ";

    printLL(head);

    cout << endl;

    insert(head, 50);

    cout << "Fifth step : ";

    printLL(head);

    cout << endl;

    Node* answer = reverseRecursive(head);

    cout << "Reversed linked list is : ";

    printLL(answer);

    return 0;
}