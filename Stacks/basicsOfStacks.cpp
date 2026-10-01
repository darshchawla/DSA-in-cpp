#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;

    // push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // size operation
    cout << "The size of the stack before pop operation is : " << s.size() << endl;

    cout << endl;

    // pop operation
    s.pop();
    s.pop();

    cout << "The size of the stack after pop operation is : " << s.size() << endl;

    cout << endl;

    // top operation
    cout << "The top element of the stack is : " << s.top() << endl;

    cout << endl;

    // empty operation
    if (s.empty())
    {
        cout << "The stack is empty." << endl;
    }
    else
    {
        cout << "The stack is not empty." << endl;
    }

    cout << endl;

    cout << "The stack is : ";
    // printing a stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}