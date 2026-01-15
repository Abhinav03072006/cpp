#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    virtual void draw() = 0; // Pure Virtual Function
};

class Circle : public Shape {
public:
    void draw() { cout << "Drawing Circle" << endl; }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    Circle c;
    c.draw();
    return 0;
}