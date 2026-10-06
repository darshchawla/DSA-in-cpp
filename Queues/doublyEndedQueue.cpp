#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(4);
    d.push_front(7);
    d.push_front(12);
    d.push_back(15);
    d.push_back(17);
    d.push_back(25);

    d.pop_back();
    d.pop_front();

    cout << "The front element of the deque is : " << d.front() << endl;

    cout << endl;

    cout << "The last element of the deque is : " << d.back() << endl;

    cout << endl;

    if (d.empty())
    {
        cout << "The deque is empty." << endl;
    }
    else
    {
        cout << "The deque is not empty." << endl;
    }

    return 0;
}