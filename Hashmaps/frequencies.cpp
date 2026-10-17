#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 1, 4, 5, 7, 7, 3, 1, 2};

    int size = 11;

    unordered_map<int, int> mpp;

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