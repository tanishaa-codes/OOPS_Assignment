
#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter numerator: ";
    cin >> num1;

    cout << "Enter denominator: ";
    cin >> num2;

    try {
        if (num2 == 0) {
            throw num2;
        }

        cout << "Result = " << num1 / num2 << endl;
    }
    catch (float x) {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}
