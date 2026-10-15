#include<iostream>
using namespace std;

class Print{

    public: 

    void display(int x){
        cout<<"Integer value: "<<x<<endl;
    }

    void display(double y){
        cout<<"Double Value: "<<y<<endl;
    }

    void display(string z){
        cout<<"String Value: "<<z<<endl;
    }
};

int main(){
    Print p;
    p.display(10);
    p.display(20.5);
    p.display("Hello");

    return 0;
}