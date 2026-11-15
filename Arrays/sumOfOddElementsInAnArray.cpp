#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 9, 7, 16, 37, 48, 63, 59, 38, 27, 43, 28, 67};

    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 1)
        {
            sum = sum + nums[i];
        }
    }

    cout << "The sum of odd elements in the array is : " << sum << endl;

    return 0;
}