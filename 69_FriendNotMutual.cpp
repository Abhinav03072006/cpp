#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int a = 10;
    friend class ClassB; // B is a friend of A
};

class ClassB {
    int b = 20;
public:
    void accessA(ClassA obj) { cout << "A data: " << obj.a << endl; }
    // Class A cannot access Class B's 'b' unless B explicitly says so
};

int main() {
    ClassA objA;
    ClassB objB;
    objB.accessA(objA);
    cout << "Friendship is one-way in this example.";
    return 0;
}