#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int v) : x(v) {}
    // This function promises not to modify any data members
    void display() const {
        cout << "X: " << x << endl;
        // x = 10; // Error: cannot modify
    }
};

int main() {
    Test t(50);
    t.display();
    return 0;
}