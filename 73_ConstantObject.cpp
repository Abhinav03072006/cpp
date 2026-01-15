#include <iostream>
using namespace std;

class Demo {
    int val;
public:
    Demo(int v) : val(v) {}
    void show() const { cout << "Value: " << val << endl; }
};

int main() {
    const Demo obj(100); // Constant object
    obj.show(); // Can only call const member functions
    return 0;
}