#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() { cout << "Vehicle moves" << endl; }
};

class Car : public Vehicle {
public:
    void move() { cout << "Car drives on roads" << endl; }
};

class Plane : public Vehicle {
public:
    void move() { cout << "Plane flies in air" << endl; }
};

int main() {
    Vehicle* v;
    Car c; Plane p;
    v = &c; v->move();
    v = &p; v->move();
    return 0;
}