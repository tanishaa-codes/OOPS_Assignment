
#include <iostream>
using namespace std;

class Bill {
public:
    // Bill for one item
    double calculateBill(int q1, double p1) {
        return q1 * p1;
    }

    // Bill for two items
    double calculateBill(int q1, double p1,
                         int q2, double p2) {
        return (q1 * p1) + (q2 * p2);
    }

    // Bill after applying discount
    double calculateBill(double amount, double discount) {
        return amount - (amount * discount / 100);
    }
};

int main() {
    Bill b;

    cout << "Bill for one item: Rs. "
         << b.calculateBill(3, 50.0) << endl;

    cout << "Bill for two items: Rs. "
         << b.calculateBill(2, 100.0, 3, 50.0) << endl;

    cout << "Bill after discount: Rs. "
         << b.calculateBill(1000.0, 10.0) << endl;

    return 0;
}
