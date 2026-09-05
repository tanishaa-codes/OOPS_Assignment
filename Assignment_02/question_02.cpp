#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        int a = length * breadth;
        cout << "Area of rectangle: " << a;
    }
};

int main()
{
    Rectangle r(10,20);
    r.area();

    return 0;
}