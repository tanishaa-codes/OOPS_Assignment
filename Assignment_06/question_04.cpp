
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> value;
    }

    Number operator+(Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    Number operator-(Number obj) {
        Number temp;
        temp.value = value - obj.value;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1, n2, n3, n4;

    cout << "Enter first number:" << endl;
    n1.getData();

    cout << "Enter second number:" << endl;
    n2.getData();

    n3 = n1 + n2;
    n4 = n1 - n2;

    cout << "Addition = ";
    n3.display();

    cout << "Subtraction = ";
    n4.display();

    return 0;
}
