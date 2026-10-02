#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int n)
{
    // Base Case
    if (s.empty())
    {
        s.push(n);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, n);

    s.push(num);
}

stack<int> reverseStack(stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        return s;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    reverseStack(s);

    insertAtBottom(s, num);

    return s;
}

int main()
{
    stack<int> s;

    s.push(18);
    s.push(17);
    s.push(7);
    s.push(5);
    s.push(2);

    stack<int> temp = s;

    cout << "The stack is : ";

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;
    cout << endl;

    stack<int> answer = reverseStack(s);

    cout << "The reversed stack is : ";

    while (!answer.empty())
    {
        cout << answer.top() << " ";
        answer.pop();
    }

    cout << endl;

    return 0;
}