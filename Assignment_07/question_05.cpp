
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayInfo() {
        cout << "Vehicle Information" << endl;
    }
};

class Car : public Vehicle {
public:
    void displayInfo() override {
        cout << "\nCar Details" << endl;
        cout << "Type: Four Wheeler" << endl;
        cout << "Seating Capacity: 5" << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayInfo() override {
        cout << "\nBike Details" << endl;
        cout << "Type: Two Wheeler" << endl;
        cout << "Seating Capacity: 2" << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayInfo() override {
        cout << "\nBus Details" << endl;
        cout << "Type: Heavy Vehicle" << endl;
        cout << "Seating Capacity: 50" << endl;
    }
};

int main() {
    Car c;
    Bike b;
    Bus bus;

    Vehicle *ptr;

    ptr = &c;
    ptr->displayInfo();

    ptr = &b;
    ptr->displayInfo();

    ptr = &bus;
    ptr->displayInfo();

    return 0;
}
