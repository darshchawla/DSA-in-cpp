#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int n)
{
    // Base Case
    if (s.empty())
    {
        s.push(n);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, n);

    s.push(num);
}

stack<int> insertAtBottom(stack<int> &s, int n)
{
    solve(s, n);

    return s;
}

int main()
{
    stack<int> s;

    s.push(7);
    s.push(1);
    s.push(4);
    s.push(5);

    int n;
    cout << "Enter a element : ";
    cin >> n;

    cout << endl;

    stack<int> answer = insertAtBottom(s, n);

    cout << "The stack after inserting " << n << " at the bottom is : ";

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}