#include<iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate and display volume
    void volume()
    {
        int v = length * width * height;
        cout << "Volume of box: " << v << endl;
    }
};

int main()
{
    // Object using default constructor
    Box b1;
    b1.volume();

    // Object using parameterized constructor
    Box b2(10, 5, 4);
    b2.volume();

    return 0;
}