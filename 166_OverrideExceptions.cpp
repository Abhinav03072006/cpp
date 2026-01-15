#include <iostream>
using namespace std;

class Parent {
public:
    virtual void task() { cout << "Parent task\n"; }
};

class Child : public Parent {
public:
    void task() override {
        throw "Child failed to complete task";
    }
};

int main() {
    Parent* p = new Child();
    try {
        p->task();
    } catch (const char* e) {
        cout << "Exception from overridden function: " << e << endl;
    }
    delete p;
    return 0;
}