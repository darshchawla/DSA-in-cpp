#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int i)
{
    if (i < 2)
        return false;

    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }

    return true;
}

vector<int> prime(int n)
{
    vector<int> answer;
    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
            {
                answer.push_back(i);
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

    vector<int> answer = prime(n);

    cout << "The prime factors between " << n << " are : ";

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