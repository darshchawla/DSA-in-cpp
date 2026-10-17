#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    char arr[] = {'a', 'c', 'b', 'd', 'b', 'b', 'a', 'c', 'e', 'a', 'a'};

    int size = 11;

    unordered_map<char, int> mpp;

    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << "Frequency of " << it.first << " is -> " << it.second << endl;
        cout << endl;
    }

    return 0;
}