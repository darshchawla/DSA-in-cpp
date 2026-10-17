#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'a', 'c', 'b', 'd', 'b', 'b', 'a', 'c', 'e', 'a', 'a'};

    int size = 11;

    int hash[26] = {0};

    for (int i = 0; i < size; i++)
    {
        hash[arr[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 0)
        {
            cout << "Frequency of " << char(i + 'a') << " is : " << hash[i];
            cout << endl;
            cout << endl;
        }
    }

    return 0;
}