#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }

    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}