#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode* next;

    ListNode(int value)
    {
        data = value;
        next = NULL;
    }
};

void printLL(ListNode* &head)
{
    ListNode* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(ListNode* &tail, int value)
{
    ListNode* temp = new ListNode(value);
    tail->next = temp;
    tail = temp;
}

bool checkPalindrome(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        if (nums[start] == nums[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

bool isPalindrome(ListNode* head)
{
    vector<int> nums;

    ListNode* temp = head;

    while (temp != NULL)
    {
        nums.push_back(temp->data);
        temp = temp->next;
    }

    return checkPalindrome(nums);
}

int main()
{
    ListNode* newNode = new ListNode(10);

    ListNode* head = newNode;
    ListNode* tail = newNode;

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