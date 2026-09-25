#include <iostream>
using namespace std;

string toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    return s;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    cout << endl;

    cout << "The string is : " << s << endl;

    cout << endl;

    string answer = toLowerCase(s);

    cout << "The string after converting all characters to lower case is : ";

    cout << answer << endl;

    return 0;
}