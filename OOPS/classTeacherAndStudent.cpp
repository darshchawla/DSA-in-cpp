#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties // attributes
    string name;
    string department;
    string subject;

    // methods // member functions
    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }

    // Setters
    void setSalary(double s)
    {
        salary = s;
    }

    // Getters
    double getSalary()
    {
        return salary;
    }
};

class Student
{
public:
    string name;
    int rollNo;
    int age;
};

int main()
{
    Teacher t1;
    t1.name = "Suresh";
    t1.subject = "C++";
    t1.department = "Computer Science";
    t1.setSalary(370000);

    cout << "Name : " << t1.name << endl;
    cout << "Subject : " << t1.subject << endl;
    cout << "Department : " << t1.department << endl;
    cout << "Salary : " << t1.getSalary() << endl;

    cout << endl;

    Teacher t2;
    t2.name = "Rajesh";
    t2.subject = "C++";
    t2.department = "IT";
    t2.setSalary(400000);

    cout << "Name : " << t2.name << endl;
    cout << "Subject : " << t2.subject << endl;
    cout << "Department : " << t2.department << endl;
    cout << "Salary : " << t2.getSalary() << endl;

    cout << endl;

    Student s1;
    s1.name = "Darsh";
    s1.rollNo = 151375;
    s1.age = 17;

    cout << "Name : " << s1.name << endl;
    cout << "Roll Number : " << s1.rollNo << endl;
    cout << "Age : " << s1.age << endl;

    return 0;
}