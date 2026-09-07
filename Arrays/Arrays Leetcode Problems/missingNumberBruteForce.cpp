#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums, int size)
{
    for (int i = 1; i <= size; i++)
    {
        bool flag = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (nums[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << endl;

    vector<int> nums(size - 1);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size - 1; i++)
    {
        cin >> nums[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size - 1; i++)
    {
        cout << nums[i];
        if (i != size - 2)
        {
            cout << ", ";
        }
    }

    cout << " }";
    cout << endl;
    cout << endl;

    int answer = missingNumber(nums, size);

    cout << "The missing number in the array is : " << answer << endl;

    return 0;
}