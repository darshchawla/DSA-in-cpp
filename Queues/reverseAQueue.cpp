#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> reverse(queue<int> &q)
{
    stack<int> s;

    while (!q.empty())
    {
        char ch = q.front();
        s.push(ch);
        q.pop();
    }

    while (!s.empty())
    {
        char ch = s.top();
        q.push(ch);
        s.pop();
    }

    return q;
}

int main()
{
    queue<int> q;

    q.push(3);
    q.push(5);
    q.push(7);
    q.push(15);
    q.push(17);
    q.push(25);
    q.push(35);

    queue<int> temp = q;

    cout << "The queue is : ";

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;
    cout << endl;

    queue<int> answer = reverse(q);

    cout << "The reversed queue is : ";

    while (!answer.empty())
    {
        cout << answer.front() << " ";
        answer.pop();
    }

    cout << endl;

    return 0;
}