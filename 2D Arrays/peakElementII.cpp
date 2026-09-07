#include <iostream>
#include <vector>
using namespace std;

int maxIndex(vector<vector<int>> &nums, int row, int column, int mid)
{
    int maxValue = -1;
    int index = -1;
    for (int i = 0; i < row; i++)
    {
        if (nums[i][mid] > maxValue)
        {
            maxValue = nums[i][mid];
            index = i;
        }
    }

    return index;
}

vector<int> peakElement(vector<vector<int>> &nums, int row, int column)
{
    int start = 0;
    int end = column - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int maxRowIndex = maxIndex(nums, row, column, mid);

        int left = mid - 1 >= 0 ? nums[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < column ? nums[maxRowIndex][mid + 1] : -1;

        if (nums[maxRowIndex][mid] > left && nums[maxRowIndex][mid] > right)
        {
            return {maxRowIndex, mid};
        }
        else if (nums[maxRowIndex][mid] < left)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return {-1, -1};
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

    vector<vector<int>> nums(r, vector<int>(c));

    cout << endl;

    cout << "Enter all the elements of the 2d array : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> nums[i][j];
        }
    }

    cout << endl;

    cout << "The array is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<int> answer = peakElement(nums, r, c);

    cout << "The indices of peak element is : { ";

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
        if (i != answer.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;

    return 0;
}