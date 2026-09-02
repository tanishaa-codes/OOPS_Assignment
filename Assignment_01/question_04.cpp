#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int roll_no;
    string hostel;
    float current_cgpa;

    void addDetails(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student roll no.: ";
        cin>>roll_no;
        cout<<"Enter Hostel allocated: ";
        cin>>hostel;
        cout<<"Enter current CGPA of the student: ";
        cin>>current_cgpa;
    }

    void updateDetails(){
        cout<<"Enter updated name: ";
        cin>>name;
        cout<<"Name updated!"<<endl;
        cout<<"Enter updated roll no.: "<<endl;
        cin>>roll_no;
        cout<<"Roll no. Updated!"<<endl;
    }

    void updateCGPA(){
        cout<<"Enter updated CGPA: ";
        cin>>current_cgpa;
        cout<<"CGPA updated!";
    }

    void updateHostel(){
        cout<<"Enter new hostel allocated: ";
        cin>>hostel;
        cout<<"Hostel details updated!";
    }

    void displayDetails(){
        cout<<"\nStudent Name: "<<name;
        cout<<"\nRoll no.: "<<roll_no;
        cout<<"\nHostel Allocated.: "<<hostel;
        cout<<"\nCurrent CGPA: "<<current_cgpa;
    }
};
int main(){
    Student s;
    s.addDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();
    cout<<"\nTanishaa Goel";
    cout<<"\nMCA 1E";
}