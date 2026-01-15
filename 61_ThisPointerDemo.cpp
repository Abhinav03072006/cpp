#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void setX(int x) {
        this->x = x; // 'this' points to the object's own x
    }
    void show() {
        cout << "Address of object: " << this << endl;
        cout << "Value of x: " << this->x << endl;
    }
};

int main() {
    Demo d;
    d.setX(100);
    d.show();
    return 0;
}