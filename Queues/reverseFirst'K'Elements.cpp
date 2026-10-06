#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> reverse(queue<int> &q, int k)
{
    stack<int> s;

    // step 1 -> pop first 'k' elements from queue and push into stack
    for (int i = 0; i < k; i++)
    {
        int value = q.front();
        q.pop();
        s.push(value);
    }

    // step 2 -> fetch from stack and push into queue
    while (!s.empty())
    {
        int value = s.top();
        s.pop();
        q.push(value);
    }

    // step 3 -> fetch first (n-k) element from queue and push back
    int temp = q.size() - k;

    while (temp--)
    {
        int value = q.front();
        q.pop();
        q.push(value);
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

    int k;
    cout << "Enter k : ";
    cin >> k;

    cout << endl;

    queue<int> answer = reverse(q, k);

    cout << "The queue after reversing first " << k << " elements is : ";

    while (!answer.empty())
    {
        cout << answer.front() << " ";
        answer.pop();
    }

    cout << endl;

    return 0;
}