#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;
    string model;
};

class Car : public Vehicle
{
public:
    int no_of_doors;

    void setValue()
    {
        brand = "Volkswagen";
        model = "Volkswagen Tayron";
        no_of_doors = 4;
    }

    void displayCar()
    {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "No. of doors: " << no_of_doors << endl;
    }
};

class Bike : public Vehicle
{
public:
    int engine_capacity;

    void setValue()
    {
        brand = "Yamaha";
        model = "MT-15";
        engine_capacity = 155;
    }

    void displayBike()
    {
        cout << "\nBike Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engine_capacity << " cc" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    c.setValue();
    c.displayCar();

    b.setValue();
    b.displayBike();

    return 0;
}