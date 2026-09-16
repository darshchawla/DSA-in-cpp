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

int length(Node *head)
{
    int count = 0;

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }

    cout << endl;

    return count;
}

int main()
{
    vector<int> arr = {2, 5, 7, 17};

    Node *head = arrayToLinkedList(arr);

    int l = length(head);

    cout << "The length of the linked list is : " << l << endl;

    return 0;
}