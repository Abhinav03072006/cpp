#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base Show" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived Show" << endl; }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show(); // Calls Derived version at runtime
    return 0;
}