#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor\n"; }
    virtual ~Base() { cout << "Base Destructor\n"; } // Virtual is key here
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor\n"; }
    ~Derived() { cout << "Derived Destructor\n"; }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // Without virtual destructor, Derived's destructor wouldn't be called
    return 0;
}