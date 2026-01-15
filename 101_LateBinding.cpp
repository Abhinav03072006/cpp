#include <iostream>
using namespace std;

class Base {
public:
    virtual void greet() { cout << "Base greeting" << endl; }
};

class Derived : public Base {
public:
    void greet() { cout << "Derived greeting" << endl; }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    // Late binding happens here: the call is decided at runtime
    ptr->greet(); 
    return 0;
}