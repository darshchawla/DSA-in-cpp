#include <iostream>
#include <stack>
using namespace std;

stack<char> removeAdjacentInString(string str)
{
    stack<char> answer;

    if (!str.empty())
    {
        answer.push(str[0]);
    }

    for (int i = 1; i < str.length(); i++)
    {
        if (answer.empty() || str[i] != answer.top())
        {
            answer.push(str[i]);
        }
        else
        {
            answer.pop();
        }
    }

    return answer;
}

string remove(string str)
{
    string answer;

    if (!str.empty())
    {
        answer.push_back(str[0]);
    }

    for (int i = 1; i < str.length(); i++)
    {
        if (answer.empty() || str[i] != answer.back())
        {
            answer.push_back(str[i]);
        }
        else
        {
            answer.pop_back();
        }
    }

    return answer;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << endl;

    cout << "The string is : " << str << endl;

    cout << endl;

    // stack<char> answer = removeAdjacentInString(str);

    // cout << "The string after removing all the adjacent duplicates is : ";

    // while (!answer.empty())
    // {
    //     cout << answer.top();
    //     answer.pop();
    // }

    // cout << endl;

    string answer = remove(str);

    cout << "The string after removing all the adjacent duplicates is : " << answer;

    cout << endl;

    return 0;
}