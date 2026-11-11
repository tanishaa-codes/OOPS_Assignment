#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal Class.\n";
    } 
};

class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dog barks.\n";
    }
};

class Cat:public Animal{
    public:
    void sound() override{
        cout<<"Cat meows.\n";
    }
};

int main(){
    Animal *a;
    Dog d;
    Cat c;
    a = &d;
    a->sound();
    a = &c;
    a->sound();
return 0;
}