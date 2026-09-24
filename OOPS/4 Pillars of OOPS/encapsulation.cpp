#include <iostream>
using namespace std;

class Student // Encapsulation
{
private:
    string name;
    int height;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

class Account // Uses of encapsulation
{
private:
    double balance;  // data hiding
    string password; // data hiding
public:
    string accountId;
    string username;
};

int main()
{
    Student first;
    first.setName("Darsh");
    first.setHeight(175);
    first.setAge(17);

    cout << "Name : " << first.getName() << endl;
    cout << "Height : " << first.getHeight() << " cm" << endl;
    cout << "Age : " << first.getAge() << endl;

    return 0;
}