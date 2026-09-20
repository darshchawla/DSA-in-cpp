#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] != 0)
                {
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }
    }
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