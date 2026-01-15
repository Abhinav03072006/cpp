#include <iostream>
using namespace std;

class Base {
public:
    void msg() { cout << "Public in Base" << endl; }
};

class Derived : private Base {
public:
    void access() { msg(); } // Accessible within class
};

int main() {
    Derived d;
    d.access();
    // d.msg(); // Error: msg is now private in Derived
    return 0;
}