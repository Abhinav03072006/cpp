#include <iostream>
using namespace std;

class Parent {
public:
    void display() { cout << "Parent display" << endl; }
};

class Child : public Parent {
public:
    // This overrides the Parent's display function
    void display() { cout << "Child display" << endl; }
};

int main() {
    Child c;
    c.display();
    return 0;
}