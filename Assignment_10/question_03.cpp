
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(5);
    int key;

    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << "Sorted vector: ";

    for (int x : v) {
        cout << x << " ";
    }

    cout << "\nEnter element to search: ";
    cin >> key;

    if (binary_search(v.begin(), v.end(), key)) {
        cout << key << " found in vector." << endl;
    }
    else {
        cout << key << " not found in vector." << endl;
    }

    return 0;
}
