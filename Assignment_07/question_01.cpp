#include<iostream>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"Current month is October.\n";
    }
};
class Derived:public Base{
    public:
    void show(){
        cout<<"Next month will be November.";
    }
};
int main(){
    Base b;
    b.show();
    Derived d;
    d.show();
return 0;
}