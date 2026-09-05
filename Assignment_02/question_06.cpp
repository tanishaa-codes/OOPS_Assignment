#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:

    // Default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    // Display function
    void display()
    {
        cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    // Object using default constructor
    Complex c1;
    c1.display();

    // Object using parameterized constructor
    Complex c2(10, 5);
    c2.display();

    return 0;
}