#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int primeCount(int l, int r)
{
    int count = 0;

    for (int i = l; i <= r; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int l;
    cout << "Enter starting range : ";
    cin >> l;

    cout << endl;

    int r;
    cout << "Enter ending range : ";
    cin >> r;

    cout << endl;

    int answer = primeCount(l, r);

    cout << "There are " << answer << " prime number in the range " << l << " to " << r << "." << endl;

    return 0;
}