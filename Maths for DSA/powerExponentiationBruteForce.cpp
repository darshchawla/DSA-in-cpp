#include <iostream>
using namespace std;

int power(int x, int n)
{
    int answer = 1;

    for (int i = 1; i <= n; i++)
    {
        answer = answer * x;
    }

    return answer;
}

int main()
{
    int x;
    cout << "Enter base : ";
    cin >> x;

    cout << endl;

    int n;
    cout << "Enter power : ";
    cin >> n;

    cout << endl;

    int answer = power(x, n);

    cout << x << " raised to the power " << n << " is : " << answer << endl;

    return 0;
}