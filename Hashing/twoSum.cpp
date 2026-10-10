#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int size, int target)
{
    unordered_map<int, int> m;
    vector<int> answer;

    for (int i = 0; i < size; i++)
    {
        int first = nums[i];
        int second = target - first;
        if (m.find(second) != m.end())
        {
            answer.push_back(i);
            answer.push_back(m[second]);
            break;
        }
        m[first] = i;
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

    int target;
    cout << "Enter the target : ";
    cin >> target;

    cout << endl;

    vector<int> answer = twoSum(nums, size, target);

    cout << "The two sum pair is : { ";

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