
#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x = 10, y = 20;
    float p = 12.5, q = 8.5;

    cout << "Maximum Integer = " << maximum(x, y) << endl;
    cout << "Maximum Float = " << maximum(p, q) << endl;

    return 0;
}
