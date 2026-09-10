#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &nums, int row, int column)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> answer;

    for (int i = 0; i < n; i++)
    {
        int start = nums[i][0];
        int end = nums[i][1];
        if (answer.empty() || nums[i][0] > answer.back()[1])
        {
            answer.push_back(nums[i]);
        }
        else
        {
            answer.back()[1] = max(answer.back()[1], nums[i][1]);
        }
    }

    return answer;
}

int main()
{
    int r;
    cout << "Enter number of row : ";
    cin >> r;

    cout << endl;

    int c = 2;

    vector<vector<int>> nums(r, vector<int>(c));

    cout << "Enter the intervals : " << endl;

    cout << endl;

    for (int i = 0; i < r; i++)
    {
        cout << "Interval " << i + 1 << " : ";
        for (int j = 0; j < c; j++)
        {
            cin >> nums[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "The intervals are : " << endl;

    for (int i = 0; i < r; i++)
    {
        cout << "{ " << nums[i][0] << ", " << nums[i][1] << " }" << endl;
    }

    cout << endl;
    cout << endl;

    vector<vector<int>> answer = mergeIntervals(nums, r, c);

    cout << "Merged intervals are :" << endl;

    for (int i = 0; i < answer.size(); i++)
    {
        cout << "{ " << answer[i][0] << ", " << answer[i][1] << " }" << endl;
    }

    return 0;
}