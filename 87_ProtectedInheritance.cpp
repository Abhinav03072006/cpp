#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
};

class Derived : protected Base {
public:
    void show() { cout << "X: " << x << endl; }
};

int main() {
    Derived d;
    d.show();
    // d.x = 20; // Error: x is protected
    return 0;
}