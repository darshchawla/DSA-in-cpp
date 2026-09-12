#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayIntersection(vector<int> &arr1, int size1, vector<int> &arr2, int size2)
{
    vector<int> answer;

    int i = 0;
    int j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            answer.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return answer;
}

int main()
{
    int size1;
    cout << "Enter the size of the first array : ";
    cin >> size1;

    cout << endl;

    vector<int> arr1(size1);

    cout << "Enter all the elements of the first array : ";

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << endl;

    int size2;
    cout << "Enter the size of the second array : ";
    cin >> size2;

    cout << endl;

    vector<int> arr2(size2);

    cout << "Enter all the elements of the second array : ";

    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    cout << endl;

    cout << "The first array is : ";

    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The second array is : ";

    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
    cout << endl;

    vector<int> answer = arrayIntersection(arr1, size1, arr2, size2);

    cout << "The common element(s) are : ";

    for (int element : answer)
    {
        cout << element << " ";
    }

    cout << endl;

    return 0;
}