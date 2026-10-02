#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    sortedInsert(s, num);

    s.push(n);
}

stack<int> sortStack(stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        return s;
    }

    int num = s.top();
    s.pop();

    // recursive call
    sortStack(s);

    sortedInsert(s, num);

    return s;
}

int main()
{
    stack<int> s;

    s.push(7);
    s.push(1);
    s.push(5);
    s.push(-9);
    s.push(2);
    s.push(3);
    s.push(-6);

    stack<int> temp = s;

    cout << "The stack is : ";

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;
    cout << endl;

    stack<int> answer = sortStack(s);

    cout << "The sorted stack is : ";

    while (!answer.empty())
    {
        cout << answer.top() << " ";
        answer.pop();
    }

    cout << endl;

    return 0;
}