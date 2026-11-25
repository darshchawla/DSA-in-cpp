#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums, int size)
{
    set<vector<int>> s;

    for (int i = 0; i < size; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < size; j++)
        {
            int third = -(nums[i] + nums[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                s.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }

    vector<vector<int>> answer(s.begin(), s.end());

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

    vector<vector<int>> answer = threeSum(nums, size);

    cout << "The three sum triplets are : ";

    for (int i = 0; i < answer.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << " }" << endl;
    }

    return 0;
}