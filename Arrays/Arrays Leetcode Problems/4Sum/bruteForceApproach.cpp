#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        vector<int> temp{nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());

                        s.insert(temp);
                    }
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

    int target;
    cout << "Enter a target : ";
    cin >> target;

    cout << endl;

    vector<vector<int>> answer = fourSum(nums, target);

    cout << "The quadruples are : " << endl;

    for (int i = 0; i < answer.size(); i++)
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