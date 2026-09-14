#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int difference(vector<int> &arr, int size)
{
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return maximum - minimum;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << endl;

    vector<int> arr(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;
    cout << endl;

    int answer = difference(arr, size);

    cout << "The difference between maximum element and minimum element is : " << answer << endl;

    return 0;
}