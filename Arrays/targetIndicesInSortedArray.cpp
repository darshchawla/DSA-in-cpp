#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int> &arr, int target)
{
    vector<int> answer;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            answer.push_back(i);
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

    vector<int> arr(size);

    cout << "Enter all the elements of the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The array is : { ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
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

    vector<int> answer = targetIndices(arr, target);

    cout << "The indices of targeted element " << target << " is : { ";

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