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

Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
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

    Node *answer = middle(head);

    cout << "The middle of the linked list is : ";

    cout << answer->data << endl;

    return 0;
}