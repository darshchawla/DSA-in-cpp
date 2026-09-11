#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    int arr[size];

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    // Precompute
    int hash[13] = {0};

    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;

    cout << endl;

    cout << "Enter all the queries : ";

    while (q--)
    {
        int number;
        cin >> number;
        cout << endl;
        // Fetch
        cout << number << " appears " << hash[number] << " times." << endl;
    }

    return 0;
}