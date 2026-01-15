#include <iostream>
using namespace std;

class Test {
public:
    void staticFunc() { cout << "Static Binding (Compile-time)\n"; }
    virtual void dynamicFunc() { cout << "Dynamic Binding (Run-time)\n"; }
};

int main() {
    Test t;
    t.staticFunc();  // Decided at compile time
    t.dynamicFunc(); // Decided at run time (if pointer/reference used)
    return 0;
}