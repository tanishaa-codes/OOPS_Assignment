#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void getSalary()
    {
        cin >> salary;
    }

    friend void compareSalary(Employee e1, Employee e2);
};

void compareSalary(Employee e1, Employee e2)
{
    if (e1.salary > e2.salary)
        cout << "Higher salary: " << e1.salary;
    else
        cout << "Higher salary: " << e2.salary;
}

int main()
{
    Employee e1, e2;

    cout << "Enter salary of Employee 1: ";
    e1.getSalary();

    cout << "Enter salary of Employee 2: ";
    e2.getSalary();

    compareSalary(e1, e2);

    return 0;
}