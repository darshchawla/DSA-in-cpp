#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> prime(int n)
{
    vector<int> answer;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer.push_back(i);
            while (n % i == 0)
            {
                n = n / i;
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