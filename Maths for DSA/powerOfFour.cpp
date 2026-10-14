#include <iostream>
#include <cmath>
using namespace std;

bool powerOfFour(int n)
{
    for (int i = 0; i <= 15; i++)
    {
        int answer = pow(4, i);
        if (answer == n)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    bool answer = powerOfFour(n);

    if (answer == true)
    {
        cout << "Yes, the number " << n << " is the power of four." << endl;
    }
    else
    {
        cout << "No, the number " << n << " is not the power of four." << endl;
    }

    return 0;
}