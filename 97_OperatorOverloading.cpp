#include <iostream>
using namespace std;

class Box {
    int val;
public:
    Box(int v) : val(v) {}
    // Overloading '+' operator
    Box operator+(Box const& obj) {
        return Box(val + obj.val);
    }
    void show() { cout << "Value: " << val << endl; }
};

int main() {
    Box b1(10), b2(20);
    Box b3 = b1 + b2;
    b3.show();
    return 0;
}