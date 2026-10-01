#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow." << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow." << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
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
    Stack st(5);

    st.push(7);
    st.push(15);
    st.push(23);

    cout << "The top element of the stack before pop operation is : " << st.peek() << endl;

    cout << endl;

    st.pop();

    cout << "The top element of the stack after pop operation is : " << st.peek() << endl;

    cout << endl;

    if (st.isEmpty())
    {
        cout << "The stack is empty." << endl;
    }
    else
    {
        cout << "The stack is not empty." << endl;
    }

    return 0;
}