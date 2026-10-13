#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return (i + 1);
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

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

    int answer = removeDuplicates(nums);

    cout << "The array after removing all duplicate elements is : { ";

    for (int i = 0; i < answer; i++)
    {
        cout << nums[i];
        if (i != answer - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;

    return 0;
}