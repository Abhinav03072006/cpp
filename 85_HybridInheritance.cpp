#include <iostream>
using namespace std;

class A { public: void showA() { cout << "A" << endl; } };
class B : public A { public: void showB() { cout << "B" << endl; } };
class C { public: void showC() { cout << "C" << endl; } };
// Hybrid of Multilevel (A->B->D) and Multiple (B,C -> D)
class D : public B, public C { public: void showD() { cout << "D" << endl; } };

int main() {
    D obj;
    obj.showA(); obj.showB(); obj.showC(); obj.showD();
    return 0;
}