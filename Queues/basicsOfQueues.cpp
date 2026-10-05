#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // creating a queue
    queue<int> q;

    // push operation
    q.push(1);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(12);

    queue<int> temp = q;

    cout << "The queue is : ";

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;
    cout << endl;

    cout << "The first element of the queue is : " << q.front() << endl;

    cout << endl;

    cout << "The last element of the queue is : " << q.back() << endl;

    cout << endl;

    cout << "The size of the queue before pop operation is : " << q.size() << endl;

    // pop operation
    q.pop();
    q.pop();

    cout << endl;

    cout << "The size of the queue after pop operation is : " << q.size() << endl;

    cout << endl;

    if (q.empty())
    {
        cout << "The queue is empty." << endl;
    }
    else
    {
        cout << "The queue is not empty." << endl;
    }

    return 0;
}