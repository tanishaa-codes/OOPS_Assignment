#include<iostream>
using namespace std;

class Maximum{
    public:
    int findmax(int a, int b){
        cout<<"Greater of two integers: ";
        return (a>b)?a:b;
    }
    
    int findMax(int a,int b,int c){
        cout<<"Greatest of three integers: ";
        int max = a;
        if(b>max)
        max=b;
        if(c>max)
        max=c;
        return max; 
    }

    int findMax(double a,double b){
        cout<<"Greater of two decimal numbers: ";
        return(a>b)?a:b;
    }
};

int main(){
    Maximum m;
    cout<<m.findMax(20,25)<<endl;
    cout<<m.findMax(15,45,10)<<endl;
    cout<<m.findMax(10.5,14.5)<<endl;
return 0;
}