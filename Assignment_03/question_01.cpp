#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    float marks;

    public:
    Student (string n, float m){
        name = n;
        marks = m;
    }
    friend void display (Student s);
};

void display (Student s){
    cout<<"Sudent name: "<<s.name<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}

int main(){
    Student s1("Tanishaa",95.5);
    display(s1);

    return 0;
}