
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(20);
    l.push_back(30);
    l.push_front(10);

    cout << "List after insertion: ";

    for (int x : l) {
        cout << x << " ";
    }

    l.remove(20);

    cout << "\nList after removing 20: ";

    for (int x : l) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
