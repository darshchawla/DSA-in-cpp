#include <iostream>
#include <cmath>
using namespace std;

bool powerOfThree(int n)
{
    for (int i = 0; i <= 19; i++)
    {
        int answer = pow(3, i);
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

    bool answer = powerOfThree(n);

    if (answer == true)
    {
        cout << "Yes, the number " << n << " is the power of three." << endl;
    }
    else
    {
        cout << "No, the number " << n << " is not the power of three." << endl;
    }

    return 0;
}