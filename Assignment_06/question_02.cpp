#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> value;
    }

    void operator--() {
        --value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n;

    n.getData();

    cout << "Before applying -- operator: ";
    n.display();

    --n;

    cout << "After applying -- operator: ";
    n.display();

    return 0;
}
