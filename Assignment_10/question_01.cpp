
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5);
    int sum = 0;

    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    cout << "Vector elements: ";

    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
        sum += v[i];
    }

    cout << "\nSum = " << sum << endl;

    return 0;
}
