#include<iostream>
using namespace std;

class FinalExams{
    public:

    double marks_01, marks_02, marks_03;
    double average;

    void result(double marks_01){
        cout<<"Marks in one subject: "<<marks_01<<endl;
    }
    void result(double marks_01, double marks_02){
        average = (marks_01+marks_02)/2;
        cout<<"Average marks of two subjects: "<<average<<endl;
    }
    void result(double marks_01, double marks_02, double marks_03){
        average = (marks_01+marks_02+marks_03)/3;
        cout<<"Average marks of three subjects: "<<average;
    }
};

int main(){
    FinalExams f;
    f.result(45.5);
    f.result(50.0,55.0);
    f.result(45.5,60.0,65.5);
return 0;
}