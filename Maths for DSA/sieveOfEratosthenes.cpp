#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> prime(int n)
{
    vector<int> answer;
    vector<int> prime(n + 1);

    for (int i = 2; i < n; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i <= sqrt(n); i++) // or for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            answer.push_back(i);
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

    vector<int> answer = prime(n);

    cout << "The prime numbers from 2 to " << n << " are : ";

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