#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int> &arr, int size, int x)
{
    int start = 0;
    int end = size - 1;
    int answer = size;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= x)
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int> arr(size);

    cout << endl;

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

    int x;
    cout << "Enter a number : ";
    cin >> x;

    cout << endl;

    int answer = searchInsertPosition(arr, size, x);

    cout << "The answer is : " << answer << endl;

    return 0;
}