#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
    int valA;
public:
    ClassA() : valA(10) {}
    friend void sum(ClassA, ClassB);
};

class ClassB {
    int valB;
public:
    ClassB() : valB(20) {}
    friend void sum(ClassA, ClassB);
};

void sum(ClassA a, ClassB b) {
    cout << "Sum of private values: " << a.valA + b.valB << endl;
}

int main() {
    ClassA objA;
    ClassB objB;
    sum(objA, objB);
    return 0;
}