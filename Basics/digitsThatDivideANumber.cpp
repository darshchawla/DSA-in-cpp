#include <iostream>
using namespace std;

int countDigits(int num)
{
    int original = num;
    int count = 0;

    while (num > 0)
    {
        int digit = num % 10;

        if (digit != 0 && original % digit == 0)
        {
            count++;
        }

        num = num / 10;
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << endl;

    int answer = countDigits(num);

    cout << "The number of digits that divide the given number '" << num << "' is : " << answer << endl;

    return 0;
}