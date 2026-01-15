#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // Declaration
    Counter() { count++; }
};

int Counter::count = 0; // Definition

int main() {
    Counter c1, c2, c3;
    cout << "Total objects created: " << Counter::count;
    return 0;
}