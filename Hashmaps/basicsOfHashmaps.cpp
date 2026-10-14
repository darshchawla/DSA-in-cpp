#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}