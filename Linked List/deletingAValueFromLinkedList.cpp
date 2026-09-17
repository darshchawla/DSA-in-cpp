#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *arrayToLinkedList(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node *deleteElement(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (head->data == k)
    {
        Node *temp = head;
        head = head->next;
        delete temp;

        return head;
    }
    Node *temp = head;
    Node *previous = NULL;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            previous->next = previous->next->next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
    }

    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 5, 7, 17, 35};

    Node *head = arrayToLinkedList(arr);

    int k;
    cout << "Enter a number to delete from the linked list : ";
    cin >> k;

    cout << endl;

    head = deleteElement(head, k);

    print(head);

    return 0;
}