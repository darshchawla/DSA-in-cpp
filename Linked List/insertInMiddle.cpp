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

    void insert(int value, int position)
    {
        if (position < 0)
        {
            cout << "Invalid position." << endl;
            return;
        }
        if (position == 0)
        {
            push_front(value);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid position." << endl;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
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
};

int main()
{
    List ll;

    ll.push_front(7);
    ll.push_front(5);
    ll.push_front(1);

    ll.printLL();

    cout << endl;

    int value;
    cout << "Enter a value to insert in the linked list : ";
    cin >> value;

    cout << endl;

    int position;
    cout << "Enter a position to insert the value : ";
    cin >> position;

    cout << endl;

    ll.insert(value, position);

    ll.printLL();

    return 0;
}