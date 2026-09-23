#include <iostream>
using namespace std;

class College
{
public:
    string collegeName;

    College()
    {
        collegeName = "Thapar University";
        cout << "College constructor called" << endl;
    }
};

class Department : public College
{
public:
    string departmentName;

    Department()
    {
        departmentName = "Computer Applications";
        cout << "Department constructor called" << endl;
    }

    void display()
    {
        cout << "\nCollege Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

int main()
{
    Department d;

    d.display();

    return 0;
}