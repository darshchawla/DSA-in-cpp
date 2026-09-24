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

    // Default constructor / Non - Parameterised constructor
    Teacher()
    {
        department = "IT";
    }

    // Parameterised Constructor
    Teacher(string name, string department, string subject, double salary)
    {
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &obj) // pass by reference
    {
        this->name = obj.name;
        this->department = obj.department;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

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

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Subject : " << subject << endl;
        cout << "Department : " << department << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Suresh";
    t1.subject = "C++";
    t1.setSalary(370000);

    cout << "Name : " << t1.name << endl;
    cout << "Subject : " << t1.subject << endl;
    cout << "Department : " << t1.department << endl;
    cout << "Salary : " << t1.getSalary() << endl;

    cout << endl;

    Teacher t2("Rajesh", "Computer Science", "C++", 40000);
    t2.getInfo();

    cout << endl;

    Teacher t3(t2); // default copy constructor -> invoke
    t3.getInfo();

    return 0;
}