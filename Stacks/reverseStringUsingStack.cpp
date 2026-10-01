#include <iostream>
#include <stack>
using namespace std;

void reverseString(string str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string answer = "";

    while (!s.empty())
    {
        char ch = s.top();
        answer.push_back(ch);
        s.pop();
    }

    cout << "The reversed string is : " << answer << endl;
}

int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : " << str << endl;

    cout << endl;

    reverseString(str);

    return 0;
}