#include <iostream>
#include <vector>
using namespace std;

int signFunc(int &answer)
{
    if (answer > 0)
    {
        return 1;
    }
    else if (answer < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }

    return 0;
}
int arraySign(vector<int> &nums)
{
    int answer = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            answer = 0;
            break;
        }

        if (nums[i] < 0)
        {
            answer = answer * -1;
        }
    }

    int sign;

    if (signFunc(answer) == 1)
    {
        sign = 1;
    }
    else if (signFunc(answer) == -1)
    {
        sign = -1;
    }
    else
    {
        sign = 0;
    }

    return sign;
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

    int answer = arraySign(nums);

    if (answer == 1)
    {
        cout << "The sign of product of elements of the array is positive." << endl;
    }
    else if (answer == -1)
    {
        cout << "The sign of the product of the elemets of the array is negative." << endl;
    }
    else
    {
        cout << "The product of the elements of the array is zero(0)." << endl;
    }

    return 0;
}