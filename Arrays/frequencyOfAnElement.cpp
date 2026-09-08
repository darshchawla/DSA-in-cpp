#include <iostream>
#include <vector>
using namespace std;

int frequency(vector<int> &arr, int size, int n)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }

    return count;
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

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    int answer = frequency(arr, size, n);

    cout << "The frequency of " << n << " is : " << answer;

    cout << endl;

    return 0;
}