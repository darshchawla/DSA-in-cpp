#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 1, 4, 5, 7, 7, 3, 1, 2};

    int size = 11;

    int hash[8] = {0};

    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << "Frequency of " << i << " is : " << hash[i];
        cout << endl;
        cout << endl;
    }

    return 0;
}