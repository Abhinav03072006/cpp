#include <iostream>
using namespace std;

class A { public: void greet() { cout << "Hello from A" << endl; } };
class B { public: void greet() { cout << "Hello from B" << endl; } };

class C : public A, public B {};

int main() {
    C obj;
    // Using Scope Resolution Operator :: to resolve ambiguity
    obj.A::greet();
    obj.B::greet();
    return 0;
}