
#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    void getData() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    Complex operator+(Complex obj) {
        Complex temp;

        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;

        return temp;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "\nEnter second complex number:" << endl;
    c2.getData();

    c3 = c1 + c2;

    cout << "\nFirst number = ";
    c1.display();

    cout << "Second number = ";
    c2.display();

    cout << "Result = ";
    c3.display();

    return 0;
}
