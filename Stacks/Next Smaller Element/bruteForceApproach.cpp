#include <iostream>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &nums)
{
    vector<int> answer;

    for (int i = 0; i < nums.size(); i++)
    {
        bool found = false;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                answer.push_back(nums[j]);
                found = true;
                continue;
            }
        }
        if (found == false)
        {
            answer.push_back(-1);
        }
    }

    return answer;
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

    vector<int> answer = nextSmallerElement(nums);

    cout << "The array with next smaller element is : { ";

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