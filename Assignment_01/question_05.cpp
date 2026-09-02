#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    // Data members are private
    string name;
    int roll_no;
    string hostel;
    float current_cgpa;

    // Private member functions
    void updateCGPA()
    {
        cout << "Enter updated CGPA: ";
        cin >> current_cgpa;
        cout << "CGPA updated!" << endl;
    }

    void updateHostel()
    {
        cout << "Enter new hostel allocated: ";
        cin >> hostel;
        cout << "Hostel details updated!" << endl;
    }

public:
    // Public member function
    void addDetails()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter student roll no.: ";
        cin >> roll_no;

        cout << "Enter Hostel allocated: ";
        cin >> hostel;

        cout << "Enter current CGPA: ";
        cin >> current_cgpa;
    }

    // Public member function
    void updateDetails()
    {
        cout << "Enter updated name: ";
        cin >> name;

        cout << "Name updated!" << endl;

        cout << "Enter updated roll no.: ";
        cin >> roll_no;

        cout << "Roll no. updated!" << endl;

        // Calling private functions
        updateCGPA();
        updateHostel();
    }

    // Public member function
    void displayDetails()
    {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll no.: " << roll_no;
        cout << "\nHostel Allocated: " << hostel;
        cout << "\nCurrent CGPA: " << current_cgpa << endl;
    }
};

int main()
{
    Student s;

    s.addDetails();
    s.updateDetails();
    s.displayDetails();
    cout<<"\nTanishaa Goel";
    cout<<"\nMCA 1E";

    return 0;
}