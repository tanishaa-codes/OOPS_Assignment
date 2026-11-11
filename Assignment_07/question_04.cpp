
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float s) {
        name = n;
        basicSalary = s;
    }

    virtual void calculateSalary() {
        cout << "Employee Salary Details" << endl;
    }
};

class PermanentEmployee : public Employee {
public:
    PermanentEmployee(string n, float s) : Employee(n, s) {}

    void calculateSalary() override {
        float salary = basicSalary + (0.20 * basicSalary);

        cout << "\nPermanent Employee" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

class ContractEmployee : public Employee {
public:
    ContractEmployee(string n, float s) : Employee(n, s) {}

    void calculateSalary() override {
        float salary = basicSalary + (0.10 * basicSalary);

        cout << "\nContract Employee" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

int main() {
    PermanentEmployee p("Rahul", 50000);
    ContractEmployee c("Aman", 30000);

    Employee *ptr;

    ptr = &p;
    ptr->calculateSalary();

    ptr = &c;
    ptr->calculateSalary();

    return 0;
}
