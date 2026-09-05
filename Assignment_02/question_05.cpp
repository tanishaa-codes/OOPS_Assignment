#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float cgpa;

public:

    // Default constructor
    Student()
    {
        name = "Unknown";
        roll = 0;
        cgpa = 0.0;
    }

    // Constructor with name and roll number
    Student(string n, int r)
    {
        name = n;
        roll = r;
        cgpa = 0.0;
    }

    // Constructor with name, roll number and CGPA
    Student(string n, int r, float c)
    {
        name = n;
        roll = r;
        cgpa = c;
    }

    // Function to display details
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    // Object using default constructor
    Student s1;
    s1.display();

    // Object using name and roll number constructor
    Student s2("Rahul", 101);
    s2.display();

    // Object using name, roll number and CGPA constructor
    Student s3("Priya", 102, 8.5);
    s3.display();

    return 0;
}