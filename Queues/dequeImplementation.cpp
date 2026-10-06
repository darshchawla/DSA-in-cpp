#include <iostream>
using namespace std;

class deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushFront(int value)
    {
        // check whether deque is full or not
        if (front == 0 && rear == size - 1)
        {
            cout << "The deque is full." << endl;
            return;
        }
        else if (front == -1) // to push first element
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = value;
        return;
    }

    void pushBack(int value)
    {
        // check whether deque is full or not
        if (front == 0 && rear == size - 1)
        {
            cout << "The deque is full." << endl;
            return;
        }
        else if (front == -1) // to push first element
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return;
    }

    void popFront()
    {
        if (front == -1 && rear == -1)
        {
            cout << "The deque is full." << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }

        return;
    }

    void popBack()
    {
        if (front == -1 && rear == -1)
        {
            cout << "The queue is empty." << endl;
            return;
        }
        else if (front == rear) // first element to pop
        {
            front = rear = -1;
        }
        else if (rear == 0) // to maintain cyclic nature
        {
            rear == size - 1;
        }
        else
        {
            rear--;
        }

        rear;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[rear];
    }
};

int main()
{
    deque q(5);

    q.pushFront(7);
    q.pushFront(15);
    q.pushBack(23);
    q.pushBack(35);

    q.popFront();
    q.popBack();

    if (q.isEmpty() == true)
    {
        cout << "The deque is empty." << endl;
    }
    else
    {
        cout << "The deque is not empty." << endl;
    }

    cout << endl;

    cout << "The first element of the deque is : " << q.getFront() << endl;

    cout << endl;

    cout << "The last element of the deque is : " << q.getRear() << endl;

    return 0;
}