#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor Called" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor Called" << endl; }
};

int main() {
    // Order: Base then Derived
    Derived obj;
    return 0;
}