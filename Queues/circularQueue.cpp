#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    void push(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) // to check whether queue is full
        {
            cout << "The queue is full." << endl;
            return;
        }
        else if (front == -1) // first element to push
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0) // to maintain cyclic nature
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }

        return;
    }

    void print()
    {
        if (front == -1) // to check whether queue is empty
        {
            cout << "The queue is empty." << endl;
            return;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            cout << endl;
        }
    }

    void pop()
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
        else if (front == size - 1) // to maintain cyclic nature
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
};

int main()
{
    Queue q(5);

    q.push(7);
    q.push(15);
    q.push(23);
    q.push(35);

    cout << "The queue before pop operation is : ";

    q.print();

    q.pop();

    cout << "The queue after pop operation is : ";

    q.print();

    return 0;
}