
#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Pair {
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First value = " << first << endl;
        cout << "Second value = " << second << endl;
    }
};

int main() {
    Pair<int, string> obj(101, "Rahul");

    cout << "Pair Values:" << endl;
    obj.display();

    return 0;
}
