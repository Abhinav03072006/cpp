#include <iostream>
using namespace std;

class Battery { public: void power() { cout << "Providing Power" << endl; } };
class Screen { public: void display() { cout << "Displaying Visuals" << endl; } };

// Inheriting from two classes
class Smartphone : public Battery, public Screen {};

int main() {
    Smartphone p;
    p.power();
    p.display();
    return 0;
}