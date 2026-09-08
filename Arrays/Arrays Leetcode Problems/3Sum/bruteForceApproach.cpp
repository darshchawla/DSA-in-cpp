#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());

                    s.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> answer(s.begin(), s.end());
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

    vector<vector<int>> answer = threeSum(nums);

    cout << "The triplets are : " << endl;

    for (int i = 0; i < answer.size(); i++) // answer.size() means number of triplets
    {
        cout << "{ ";

        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j];
            if (j != answer[i].size() - 1)
            {
                cout << ", ";
            }
        }

        cout << " }" << endl;
    }

    return 0;
}