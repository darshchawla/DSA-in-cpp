#include <iostream>
#include <stack>
using namespace std;

bool validParentheses(string &str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // if opening bracket, stack -> push
        // if closing bracket, check stack top and pop

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else // closing bracket;
        {
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;

    cout << "Enter a parentheses string : ";
    getline(cin, str);

    cout << endl;

    bool answer = validParentheses(str);

    if (answer == 1)
    {
        cout << "The string is a valid parentheses." << endl;
    }
    else
    {
        cout << "The string is invalid parentheses." << endl;
    }

    return 0;
}