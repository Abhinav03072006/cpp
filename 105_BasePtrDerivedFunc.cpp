#include <iostream>
using namespace std;

class Base {
public:
    virtual void identify() { cout << "I am Base" << endl; }
};

class Derived : public Base {
public:
    void identify() { cout << "I am Derived" << endl; }
};

int main() {
    Base* ptr = new Derived();
    // Even though ptr is type Base*, it calls Derived's function
    ptr->identify();
    delete ptr;
    return 0;
}