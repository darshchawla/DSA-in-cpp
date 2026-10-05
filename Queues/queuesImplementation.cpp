#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int frontIndex;
    int rear;

    Queue()
    {
        size = 100;
        arr = new int[size];
        frontIndex = 0;
        rear = 0;
    }

    void push(int value)
    {
        if (rear == size)
        {
            cout << "The queue is full." << endl;
        }
        else
        {
            arr[rear] = value;
            rear++;
        }
    }

    void print()
    {
        if (frontIndex == rear)
        {
            cout << "The queue is empty." << endl;
            return;
        }
        else
        {
            cout << "The queue is : ";
            for (int i = frontIndex; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            cout << endl;
        }
    }

    int pop()
    {
        if (frontIndex == rear)
        {
            return -1;
        }
        else
        {
            int answer = arr[frontIndex];
            arr[frontIndex] = -1;
            frontIndex++;
            if (frontIndex == rear)
            {
                frontIndex = 0;
                rear = 0;
            }

            return answer;
        }
    }

    int front()
    {
        if (frontIndex == rear)
        {
            return -1;
        }
        else
        {
            return arr[frontIndex];
        }
    }

    bool isEmpty()
    {
        if (frontIndex == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q;

    q.push(7);
    q.push(15);
    q.push(23);
    q.push(35);

    q.print();

    cout << "The front element of the queue before pop operation is : " << q.front() << endl;

    cout << endl;

    q.pop();

    cout << "The front element of the queue after pop operation is : " << q.front() << endl;

    cout << endl;

    if (q.isEmpty())
    {
        cout << "The queue is empty." << endl;
    }
    else
    {
        cout << "The queue is not empty." << endl;
    }

    return 0;
}