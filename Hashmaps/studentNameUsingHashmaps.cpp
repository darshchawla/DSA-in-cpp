#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> mpp;

    mpp[101] = "Rahul";
    mpp[107] = "Vinay";
    mpp[265] = "Aditya";
    mpp[75] = "Nilesh";
    mpp[192] = "Manish";

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
        cout << endl;
    }

    return 0;
}