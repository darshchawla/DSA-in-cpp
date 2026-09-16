#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node x= Node(arr[0],nullptr);
    Node *y = &x;
    cout<<x.data<<endl;
    cout<<x.next<<endl;
    cout << y;

    return 0;
}