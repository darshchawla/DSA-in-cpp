#include <iostream>
#include <stack>
using namespace std;

bool palindromeString(string str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != s.top())
        {
            return false;
        }

        s.pop();
    }

    return true;
}

int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : " << str << endl;

    cout << endl;

    bool answer = palindromeString(str);

    if (answer == 1)
    {
        cout << "The string is palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}