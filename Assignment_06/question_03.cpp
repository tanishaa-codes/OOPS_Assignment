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

    void display() {
        cout << "Sum = " << value << endl;
    }
};

int main() {
    Number n1, n2, n3;

    cout << "Enter first number:" << endl;
    n1.getData();

    cout << "Enter second number:" << endl;
    n2.getData();

    n3 = n1 + n2;

    cout << "Result after addition:" << endl;
    n3.display();

    return 0;
}
