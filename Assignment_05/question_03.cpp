#include<iostream>
using namespace std;

class Calculator{
    public:

    void CalculateSum(int a,int b){
        int sum = a+b;
        cout<<"Sum of two integers: "<<sum<<endl;
    }
    void CalculateSum(int a, int b, int c){
        int sum = a+b+c;
        cout<<"Sum of three integers: "<<sum<<endl;
    }
    void CalculateSum(double a, double b){
        int sum = a+b;
        cout<<"The sum of two deecimal numbers: "<<sum<<endl;
    }
};

int main(){
    Calculator c;
    c.CalculateSum(10,10);
    c.CalculateSum(15,25,35);
    c.CalculateSum(20.5,40.5);

    return 0;
}