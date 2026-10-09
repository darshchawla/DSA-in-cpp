#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(50);
    d.push_front(25);
    d.push_front(7);
    d.push_front(12);
    d.push_back(17);
    d.push_back(45);
    d.push_back(18);

    deque<int> temp1 = d;

    cout << "The deque before pop operation is : ";

    while (!temp1.empty())
    {
        cout << temp1.front() << " ";
        temp1.pop_front();
    }

    cout << endl;
    cout << endl;

    d.pop_back();
    d.pop_front();

    deque<int> temp2 = d;

    cout << "The deque after pop operation is : ";

    while (!temp2.empty())
    {
        cout << temp2.front() << " ";
        temp2.pop_front();
    }

    cout << endl;
    cout << endl;

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

    cout << endl;

    deque<int> temp3 = d;

    sort(temp3.begin(), temp3.end());

    cout << "The sorted deque is : ";

    while (!temp3.empty())
    {
        cout << temp3.front() << " ";
        temp3.pop_front();
    }

    cout << endl;

    return 0;
}