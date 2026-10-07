#include <iostream>
#include <queue>
using namespace std;

string firstNonRepeating(string s)
{
    int count[26] = {0};
    queue<int> q;

    string answer = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        count[ch - 'a']++;

        q.push(ch);

        while (!q.empty())
        {
            if (count[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                answer.push_back(q.front());
                break;
            }
        }

        if (q.empty())
        {
            answer.push_back('#');
        }
    }

    return answer;
}

int main()
{
    string s;

    cout << "Enter a string : ";
    getline(cin, s);

    cout << endl;

    cout << "The string is : " << s << endl;

    cout << endl;

    string answer = firstNonRepeating(s);

    cout << "The string after first non-repeating character is : " << answer << endl;

    return 0;
}