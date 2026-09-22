#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> divisors(int n)
{
    vector<int> answer;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            answer.push_back(i);
            if (n / i != i)
            {
                answer.push_back(n / i);
            }
        }
    }

    return answer;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    vector<int> answer = divisors(n);

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