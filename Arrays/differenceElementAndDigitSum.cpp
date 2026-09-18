#include <iostream>
#include <vector>
using namespace std;

int differenceOfSum(vector<int> &nums, int size)
{
    int eleSum = 0;
    int digSum = 0;
    int digit;

    for (int i = 0; i < nums.size(); i++)
    {
        eleSum += nums[i];
        while (nums[i] > 0)
        {
            digit = nums[i] % 10;
            digSum += digit;
            nums[i] = nums[i] / 10;
        }
    }

    return eleSum - digSum;
}

int main()
{

    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> nums(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;
    cout << endl;

    int answer = differenceOfSum(nums, size);

    cout << "The difference between element sum and digit sum is : " << answer << endl;

    return 0;
}