#include <iostream>
#include <vector>
using namespace std;

vector<int> missingAndRepeating(vector<int> &nums, int size)
{
    long long n = nums.size();
    // sum - sumN
    // square - squareN
    long long sumN = (n * (n + 1)) / 2;
    long long squareN = (n * (n + 1) * (2 * n + 1)) / 6;
    long long sum = 0;
    long long square = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        square += (long long)nums[i] * (long long)nums[i];
    }

    long long value1 = sum - sumN; // x - y
    long long value2 = square - squareN;
    value2 = value2 / value1; // x + y

    long long x = (value1 + value2) / 2;
    long long y = x - value1;

    return {(int)x, (int)y};
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