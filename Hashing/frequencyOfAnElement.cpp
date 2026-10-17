#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 1, 4, 5, 7, 7, 3, 1, 2};

    int size = 11;

    int element;
    cout << "Enter an element : ";
    cin >> element;

    cout << endl;

    int hash[8] = {0};

    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    if (element >= 0 && element < 8)
    {
        cout << "The frequency of " << element << " is : " << hash[element] << "." << endl;
    }

    else
    {
        cout << "Element is outside the supported range." << endl;
    }

    return 0;
}