#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    vector<int> temp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }

    while (temp.size() < nums.size())
    {
        temp.push_back(0);
    }

    nums = temp;
}

int main()
{
    vector<int> nums = {1, 0, 2, 3, 0, 4, 0, 1};

    moveZeroes(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}