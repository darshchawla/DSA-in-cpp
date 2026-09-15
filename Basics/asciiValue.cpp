#include <iostream>
using namespace std;

int ascii(char character)
{
    return (int)(character);
}

int main()
{
    char character;
    cout << "Enter a character : ";
    cin >> character;

    cout << endl;

    int answer = ascii(character);

    cout << "The ASCII value of " << character << " is : " << answer << endl;

    return 0;
}