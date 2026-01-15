#include <iostream>
using namespace std;

class Animal { public: void breathe() { cout << "Breathing..." << endl; } };
class Mammal : public Animal { public: void walk() { cout << "Walking..." << endl; } };
class Human : public Mammal { public: void speak() { cout << "Speaking..." << endl; } };

int main() {
    Human h;
    h.breathe(); // From Animal
    h.walk();    // From Mammal
    h.speak();   // Own
    return 0;
}