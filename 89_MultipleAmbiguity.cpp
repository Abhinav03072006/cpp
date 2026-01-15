#include <iostream>
using namespace std;

class A { public: void greet() { cout << "Hello from A" << endl; } };
class B { public: void greet() { cout << "Hello from B" << endl; } };

class C : public A, public B {};

int main() {
    C obj;
    // obj.greet(); // Error: Ambiguous - which greet?
    cout << "Ambiguity occurs when two base classes have the same function name." << endl;
    return 0;
}