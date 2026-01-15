#include <iostream>
using namespace std;

class A { public: int a; };

// Virtual inheritance prevents multiple instances of 'A' in 'D'
class B : virtual public A { };
class C : virtual public A { };

class D : public B, public C { };

int main() {
    D obj;
    obj.a = 10; // No ambiguity thanks to 'virtual'
    cout << "Value of a: " << obj.a << endl;
    return 0;
}