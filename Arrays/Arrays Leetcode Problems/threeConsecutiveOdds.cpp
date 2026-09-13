#include <iostream>
#include <vector>
using namespace std;

bool threeConsecutiveOdds(vector<int> &arr, int size)
{
    bool answer = false;

    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (arr.size() == 1 || arr.size() == 2)
        {
            return false;
        }
        if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1)
        {
            answer = true;
        }
    }

    return answer;
}

int main()
{
    int size;
    cout << "Enter size of the array : ";
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

    int answer = threeConsecutiveOdds(nums, size);

    if (answer == 1)
    {
        cout << "Yes, the array have three consecutive odd numbers." << endl;
    }
    else
    {
        cout << "No, the array did not have the three consecutive odd numbers." << endl;
    }
    return 0;
}