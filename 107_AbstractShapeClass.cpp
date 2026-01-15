#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0; // Pure virtual
};

class Square : public Shape {
    float s;
public:
    Square(float side) : s(side) {}
    float area() { return s * s; }
};

int main() {
    Square sq(5);
    cout << "Area: " << sq.area() << endl;
    return 0;
}