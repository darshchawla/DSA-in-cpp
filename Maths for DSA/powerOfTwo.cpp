#include <iostream>
#include <cmath>
using namespace std;

bool powerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int answer = pow(2, i);
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

    bool answer = powerOfTwo(n);

    if (answer == true)
    {
        cout << "Yes, the number " << n << " is the power of two." << endl;
    }
    else
    {
        cout << "No, the number " << n << " is not the power of two." << endl;
    }

    return 0;
}