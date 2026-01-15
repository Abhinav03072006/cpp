#include <iostream>
using namespace std;

class Calculator {
public:
    // Defined inside class
    void welcome() { cout << "Welcome to Calc\n"; }

    // Declared inside, defined outside
    int add(int a, int b);
};

int Calculator::add(int a, int b) {
    return a + b;
}

int main() {
    Calculator c;
    c.welcome();
    cout << "Sum: " << c.add(10, 20);
    return 0;
}