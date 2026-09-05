#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int rollno;
    
    public:
    Student(){
        name = "Tanishaa";
        rollno = 2026010126;
    }
    void display(){
        cout<<"Name: "<<name;
        cout<<"\nRoll no. "<<rollno;
    }
};

int main(){

    Student s;
    s.display();
    
}
