#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
   
//To initialize the complex number
    void set()
    {
        cout<<"Enter the real part: ";
        cin>>real;

        cout<<"Enter the imaginary part: ";
        cin>>imaginary;
    }
//Displaying the complex number
void display()
{
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}
Complex sum(Complex c)
{
    Complex result;

    result.real = real + c.real;
    result.imaginary = imaginary + c.imaginary;

    return result;
}
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.set();

    cout << "\nEnter second complex number:" << endl;
    c2.set();

    // Add c1 and c2
    c3 = c1.sum(c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    cout<<"\nTanishaa Goel";
    cout<<"\nMCA 1E";

    return 0;
}
