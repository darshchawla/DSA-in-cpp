#include <iostream>
using namespace std;

double power(double x, int n)
{
    int m = n;
    double answer = 1;

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            answer = answer * x;
            n = n - 1;
        }
        else
        {
            n = n / 2;
            x = x * x;
        }
    }
    if (m < 0)
    {
        answer = 1.0 / answer;
    }

    return answer;
}

int main()
{
    double x;
    cout << "Enter base : ";
    cin >> x;

    cout << endl;

    int n;
    cout << "Enter power : ";
    cin >> n;

    cout << endl;

    double answer = power(x, n);

    cout << x << " raised to the power " << n << " is : " << answer << endl;

    return 0;
}