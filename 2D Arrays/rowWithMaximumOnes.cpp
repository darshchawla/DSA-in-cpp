#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    int answer = -1;

    while (start <= end)
    {

        if (arr[mid] == target)
        {
            answer = mid;
            end = mid - 1;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return answer;
}

int maximumOnes(vector<vector<int>> &arr, int row, int column)
{
    int count_max = -1;
    int index = -1;
    for (int i = 0; i < row; i++)
    {
        int first = firstOccurrence(arr[i], column, 1);

        int count_ones = 0;

        if (first != -1)
        {
            count_ones = column - first;
        }

        if (count_ones > count_max)
        {
            count_max = count_ones;
            index = i;
        }
    }

    return index;
}

int main()
{
    int r;
    cout << "Enter number of rows : ";
    cin >> r;

    cout << endl;

    int c;
    cout << "Enter number of columns : ";
    cin >> c;

    cout << endl;

    vector<vector<int>> arr(r, vector<int>(c));

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int answer = maximumOnes(arr, r, c);

    cout << "The index of the row with maximum number of ones is : " << answer << endl;

    return 0;
}