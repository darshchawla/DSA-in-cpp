#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void printLL()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    Node *getHead()
    {
        return head;
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

int main()
{
    List ll;

    ll.push_front(20);
    ll.push_front(15);
    ll.push_front(7);
    ll.push_front(3);
    ll.push_front(1);

    ll.printLL();

    cout << endl;

    Node *head = ll.getHead();

    Node *answer = reverse(head);

    cout << "Reversed Linked List: ";

    Node *temp = answer;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}