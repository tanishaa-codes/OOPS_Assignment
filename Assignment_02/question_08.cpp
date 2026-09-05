#include<iostream>
using namespace std;

class Demo
{
public:

    // Constructor
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void test()
{
    cout << "Inside test function" << endl;

    Demo d2;

    cout << "Leaving test function" << endl;
}

int main()
{
    cout << "Inside main function" << endl;

    Demo d1;

    cout << "Calling test function" << endl;

    test();

    cout << "Back to main function" << endl;

    return 0;
}