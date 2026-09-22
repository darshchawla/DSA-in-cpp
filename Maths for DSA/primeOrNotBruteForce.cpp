#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int count=0;

    for (int i = 1; i <= n; i++)  // Time complexity -> O(n);
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if(count==2){
        return true;
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;

    if (n <= 1)
    {
        cout << "Neither Prime, Nor Composite." << endl;
    }

    else
    {
        int a = isPrime(n);

        if (a == 0)
        {
            cout << "Prime Number." << endl;
        }
        else
        {
            cout << "Composite Number." << endl;
        }
    }

    return 0;
}