#include<iostream>
using namespace std;

class Area{
    public: 
    double area;
    double PI = 3.14;
    void Calculate(double x){
        area = x*x;
        cout<<"Area of a square: "<<area<<endl;
    }
    void Calculate(double l , double b){
        area = l*b;
        cout<<"Area of a rectangle: "<<area<<endl;
    }
    void Calculate(double r, char c){
        area = PI*r*r; 
        cout<<"Area of circle: "<<area<<endl;
    }
};

int main(){
    Area a;
    a.Calculate(18);
    a.Calculate(12.5,14.5);
    a.Calculate(5.5,'a');
return 0;
}
