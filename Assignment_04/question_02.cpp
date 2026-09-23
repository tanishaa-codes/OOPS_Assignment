#include<iostream>
using namespace std;

class Person{
    public:
    string name = "Harish" ;
};

class Employee : public Person {
    public:
    int emp_id = 4001;
};

class Manager : public Employee {
    string department = "Project Management";
    float salary = 55000;

    public:
    void displayDetails(){
        cout<<"Name:"<<name<<endl;
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

int main(){
    Manager m;
    m.displayDetails();
    return 0;
}