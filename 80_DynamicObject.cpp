#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};

int main() {
    // Dynamic object creation
    Demo* ptr = new Demo();
    // Manual deletion
    delete ptr;
    return 0;
}