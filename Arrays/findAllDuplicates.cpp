#include <iostream>
#include <vector>
using namespace std;

vector<int> allDuplicates(vector<int> &nums)
{
    vector<int> answer;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                answer.push_back(nums[i]);
            }
        }
    }

    return answer;
}

int main()
{
    vector<int> nums = {54, 7, 3, 54, 8, 34, 7, 3, 75, 8};

    cout << "The array is : { ";

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;
    cout << endl;

    vector<int> answer = allDuplicates(nums);

    cout << "The array with duplicate elements is : { ";

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