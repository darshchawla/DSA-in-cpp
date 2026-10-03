#include <iostream>
#include <stack>
#include <climits>
using namespace std;

int getMin(stack<int> &s)
{
    int minimum = INT_MAX;

    while (!s.empty())
    {
        minimum = min(minimum, s.top());
        s.pop();
    }

    return minimum;
}

int main()
{
    stack<int> s;

    s.push(5);
    s.push(3);
    s.push(8);
    s.push(2);
    s.push(4);

    int answer = getMin(s);

    cout << "The minimum element is the stack is : " << answer << endl;

    return 0;
}