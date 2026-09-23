#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    int rollno;
    string course;

    public:

       void getDdata(){
        cout<<"Enter details of the student: "<<endl;
        cout<<"Name:";
        cin>>name;
        cout<<"Age:";
        cin>>age;
        cout<<"Roll No.";
        cin>>rollno;
        cout<<"Course:";
        cin>>course;
       }

       void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No."<<rollno<<endl;
        cout<<"Course:"<<course<<endl;
       }
};

int main(){
    Student s;
    s.getDdata();
    s.displayData();
    return 0;
}