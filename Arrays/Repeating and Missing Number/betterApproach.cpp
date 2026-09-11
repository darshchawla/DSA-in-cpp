#include <iostream>
#include <vector>
using namespace std;

vector<int> missingAndRepeating(vector<int> &nums, int size)
{
    vector<int> hash(size + 1, 0);

    for (int i = 0; i < size; i++)
    {
        hash[nums[i]] += 1;
    }

    int repeating = -1;
    int missing = -1;

    for (int i = 1; i <= size; i++)
    {
        if (hash[i] == 2)
        {
            repeating = i;
        }
        if (hash[i] == 0)
        {
            missing = i;
        }
        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating, missing};
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

    vector<int> answer = missingAndRepeating(nums, size);

    cout << "The repeating and missing number in the array is : { ";

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