#include <iostream>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string : ";
    getline(cin, s);

    cout << endl;

    // Precompute
    int hash[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;

    cout << endl;

    cout << "Enter all the queries : ";

    while (q--)
    {
        char number;
        cin >> number;
        cout << endl;
        // Fetch
        cout << number << " appears " << hash[number] << " times." << endl;
    }

    return 0;
}