#include<iostream>
using namespace std;

class Counter{
    int count;
    public:
    Counter(){
        count = 0; 
    }
    void operator++(){
        ++count;
    }
    void display (){
        cout<<"Count = "<<count<<endl;
    }
};

int main(){
    Counter c;
    cout << "Before increment: ";
    c.display();
    ++c;
    cout << "After increment: ";
    c.display();

return 0;
}