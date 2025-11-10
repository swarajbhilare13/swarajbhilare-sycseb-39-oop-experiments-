#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    string model;

public:
    Vehicle(string b, string m) : brand(b), model(m) {}

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

// Derived class from Vehicle
class Car : public Vehicle {
protected:
    string type; // e.g., sedan, SUV

public:
    Car(string b, string m, string t) : Vehicle(b, m), type(t) {}

    void displayCar() {
        displayVehicle();
        cout << "Type: " << type << endl;
    }
};

// Derived class from Car
class ElectricCar : public Car {
private:
    int batteryCapacity; // in kWh

public:
    ElectricCar(string b, string m, string t, int bc)
        : Car(b, m, t), batteryCapacity(bc) {}

    void displayElectricCar() {
        displayCar();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

// Main function
int main() {
    ElectricCar ec("Tesla", "Model S", "Sedan", 100);
    ec.displayElectricCar();
    return 0;
}