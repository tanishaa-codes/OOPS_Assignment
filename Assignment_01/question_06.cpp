#include<iostream>
using namespace std;

class Student
{
private:

    // Private member function

    void showMarks()
    {
        cout<<"Marks: 85"<<endl;
    }

    // Another private member function
    void showGrade()
    {
        cout<<"Grade:A"<<endl;
    }
    public:
    // Public member function
    void display()
    {
        cout<<"Student Details: "<<endl;

        // Calling private member functions
        showMarks();
        showGrade();
    }
};

int main(){
    Student s;
    s.display();
    cout<<"\nTanishaa Goel";
    cout<<"\nMCA 1E";
    return 0;
}