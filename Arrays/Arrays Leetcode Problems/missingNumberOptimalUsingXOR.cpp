#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums, int size)
{
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < size - 1; i++)
    {
        xor2 ^= nums[i];
        xor1 ^= (i + 1);
    }
    xor1 ^= size;

    int answer = xor1 ^ xor2;
    return answer;
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