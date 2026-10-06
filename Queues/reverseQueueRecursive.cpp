#include <iostream>
#include <queue>
using namespace std;

queue<int> reverse(queue<int> &q)
{
    if (q.empty())
    {
        return q;
    }

    // removing front element
    int element = q.front();
    q.pop();

    // recursive call
    reverse(q);

    // inserting removed element
    q.push(element);

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