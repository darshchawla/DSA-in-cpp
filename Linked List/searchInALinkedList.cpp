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

int search(Node *head, int value)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == value)
            return 1;
        temp = temp->next;
    }

    return 0;
}

int main()
{
    vector<int> arr = {2, 5, 7, 17};

    Node *head = arrayToLinkedList(arr);

    int value;
    cout << "Enter a number to search in the linked list : ";
    cin >> value;

    cout << endl;

    int s = search(head, value);

    if (s == 1)
    {
        cout << "Yes, " << value << " is present in linked list." << endl;
    }
    else
    {
        cout << "No, " << value << " is not present in linked list." << endl;
    }

    return 0;
}