#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int count, int size)
{
    // Base case
    if (count == size / 2)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, count + 1, size);

    s.push(num);
}

void deleteMiddle(stack<int> &s)
{
    int n = s.size();
    int count = 0;

    cout << "The stack after deleting middle element is : ";

    solve(s, count, n);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
}

int main()
{
    stack<int> s;

    s.push(3);
    s.push(5);
    s.push(9);
    s.push(2);
    s.push(4);

    deleteMiddle(s);

    return 0;
}