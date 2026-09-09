#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int> &arr, int size, int x)
{
    int start = 0;
    int end = size - 1;
    int answer = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] <= mid)
        {
            answer = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return answer;
}

int ceil(vector<int> &arr, int size, int x)
{
    int start = 0;
    int end = size - 1;
    int answer = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= x)
        {
            answer = arr[mid];
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

    int answer1 = floor(arr, size, x);

    cout << "The floor value in the array is : " << answer1 << endl;

    cout << endl;

    int answer2 = ceil(arr, size, x);

    cout << "The ceil value in the array is : " << answer2 << endl;

    return 0;
}