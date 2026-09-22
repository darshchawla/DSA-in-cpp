#include <iostream>
#include <vector>
using namespace std;

vector<int> divisors(int num)
{
    vector<int> answer;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            answer.push_back(i);
        }
    }

    return answer;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << endl;

    vector<int> answer = divisors(num);

    cout << "The divisors of " << num << " are : ";

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
        if (i != answer.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}