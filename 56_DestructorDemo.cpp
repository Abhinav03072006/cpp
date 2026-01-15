#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor: Resource Allocated" << endl; }
    ~Test() { cout << "Destructor: Resource Freed" << endl; }
};

int main() {
    cout << "Inside main..." << endl;
    {
        Test t1; // Local scope
    } // t1 destroyed here
    cout << "Back in main..." << endl;
    return 0;
}